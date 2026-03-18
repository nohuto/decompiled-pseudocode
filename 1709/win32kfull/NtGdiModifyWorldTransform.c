/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C00F0C60
 * Callers:
 *     <none>
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C002C48C (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // rbx
  DC *v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  unsigned int v10; // [rsp+2Ch] [rbp-34h]
  int v11; // [rsp+30h] [rbp-30h] BYREF
  struct _XFORML v12; // [rsp+38h] [rbp-28h] BYREF

  v3 = 0;
  v5 = a2;
  v9 = 0;
  v10 = 0;
  LOBYTE(a2) = 1;
  v8 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v8 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v8) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
      v8 = 0LL;
      goto LABEL_10;
    }
    if ( (*((_DWORD *)v8 + 134) & 4) != 0 )
      DC::vMarkTransformDirty(v8);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( v8 )
  {
    if ( v5 )
      v3 = ProbeAndConvertXFORM(v5, &v12);
    else
      LOBYTE(v3) = a3 == 1;
    if ( v3 )
      v3 = XDCOBJ::bModifyWorldTransform((XDCOBJ *)&v8, &v12, a3);
  }
LABEL_10:
  if ( v8 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v8);
    v11 = 0;
    v6 = *(_QWORD *)v8;
    HmgDecrementExclusiveReferenceCountEx(v8, v10, &v11);
    if ( v11 )
      bDeleteDCInternalEx(v6, 0LL);
  }
  return v3;
}
