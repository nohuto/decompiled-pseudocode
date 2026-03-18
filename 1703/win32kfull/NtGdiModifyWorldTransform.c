/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C00DE360
 * Callers:
 *     <none>
 * Callees:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C0074D20 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rsi
  DC *v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // eax
  DC *v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  int v12; // [rsp+2Ch] [rbp-24h]
  struct _XFORML v13; // [rsp+30h] [rbp-20h] BYREF

  v3 = 0;
  v5 = a2;
  v11 = 0;
  v12 = 0;
  LOBYTE(a2) = 1;
  v10 = (DC *)HmgLockEx(a1, a2, 0LL);
  v6 = v10;
  if ( !v10 )
  {
LABEL_10:
    if ( v6 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v10);
      _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
    }
    return v3;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v10) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
    v6 = 0LL;
    v10 = 0LL;
    goto LABEL_10;
  }
  v6 = v10;
  if ( (*((_DWORD *)v10 + 134) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v10);
    v6 = v10;
  }
  if ( v6 )
  {
    if ( v5 )
    {
      v7 = ProbeAndConvertXFORM(v5, &v13);
      v6 = v10;
      v3 = v7;
    }
    else
    {
      LOBYTE(v3) = a3 == 1;
    }
    if ( v3 )
    {
      v8 = XDCOBJ::bModifyWorldTransform((XDCOBJ *)&v10, &v13, a3);
      v6 = v10;
      v3 = v8;
    }
    goto LABEL_10;
  }
  return v3;
}
