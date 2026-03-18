/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0080648
 * Callers:
 *     GreSaveDC @ 0x1C0080270 (GreSaveDC.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall bSaveRegion(struct DCOBJ *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v5; // rcx
  DC *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rax
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  _BYTE v13[4]; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+24h] [rbp-3Ch] BYREF
  DC *v15; // [rsp+28h] [rbp-38h] BYREF
  int v16; // [rsp+30h] [rbp-30h]
  unsigned int v17; // [rsp+34h] [rbp-2Ch]
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  int v19; // [rsp+40h] [rbp-20h]
  struct _RECTL v20; // [rsp+48h] [rbp-18h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 1;
  if ( (_DWORD)a2 != 1 )
  {
    v5 = *(_QWORD *)(v2 + 128);
    v16 = 0;
    LOBYTE(a2) = 1;
    v17 = 0;
    v15 = (DC *)HmgLockEx(v5, a2, 0LL);
    v6 = v15;
    if ( v15 )
    {
      if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v15) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
        v6 = 0LL;
        v15 = 0LL;
        goto LABEL_15;
      }
      v6 = v15;
      if ( (*((_DWORD *)v15 + 134) & 4) != 0 )
        DC::vMarkTransformDirty(v15);
    }
    else
    {
      if ( !(unsigned __int8)PsIsWin32KFilterAuditEnabled() && !(unsigned __int8)PsIsWin32KFilterEnabled() )
        goto LABEL_15;
      PsGetWin32KFilterSet();
    }
    if ( v6 )
    {
      v7 = *((_QWORD *)v6 + 29);
      if ( v7 )
        ++*(_DWORD *)(v7 + 32);
      v8 = *((_QWORD *)v6 + 28);
      if ( v8 )
        ++*(_DWORD *)(v8 + 32);
      goto LABEL_11;
    }
LABEL_15:
    v3 = 0;
LABEL_11:
    if ( v6 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v15);
      v14 = 0;
      v9 = *(_QWORD *)v15;
      HmgDecrementExclusiveReferenceCountEx(v15, v17, &v14);
      if ( v14 )
        bDeleteDCInternalEx(v9, 0LL);
    }
    return v3;
  }
  v11 = *(_QWORD *)(v2 + 528);
  v20.left = 0;
  v20.bottom = 0;
  v20.top = HIDWORD(v11);
  v20.right = v11;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  if ( v18 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v13);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
    }
    RGNOBJ::vSet((RGNOBJ *)&v18, &v20);
    *(_QWORD *)(*(_QWORD *)a1 + 1536LL) = v18;
    if ( v19 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    return v3;
  }
  if ( v19 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  return 0LL;
}
