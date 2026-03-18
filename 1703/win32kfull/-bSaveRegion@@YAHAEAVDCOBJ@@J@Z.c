/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C007DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall bSaveRegion(struct DCOBJ *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rcx
  DC *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-40h] BYREF
  DC *v13; // [rsp+28h] [rbp-38h] BYREF
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  int v17; // [rsp+40h] [rbp-20h]
  struct _RECTL v18; // [rsp+48h] [rbp-18h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 1;
  if ( (_DWORD)a2 != 1 )
  {
    v5 = *(_QWORD *)(v2 + 128);
    v14 = 0;
    LOBYTE(a2) = 1;
    v15 = 0;
    v13 = (DC *)HmgLockEx(v5, a2, 0LL);
    v6 = v13;
    if ( v13 )
    {
      if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v13) )
      {
        v6 = v13;
        if ( (*((_DWORD *)v13 + 134) & 4) != 0 )
          DC::vMarkTransformDirty(v13);
        v7 = *((_QWORD *)v6 + 29);
        if ( v7 )
          ++*(_DWORD *)(v7 + 32);
        v8 = *((_QWORD *)v6 + 28);
        if ( v8 )
          ++*(_DWORD *)(v8 + 32);
        goto LABEL_10;
      }
      _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
      v6 = 0LL;
      v13 = 0LL;
    }
    v3 = 0;
LABEL_10:
    if ( v6 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v13);
      _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
    }
    return v3;
  }
  v10 = *(_QWORD *)(v2 + 528);
  v18.left = 0;
  v18.bottom = 0;
  v18.top = HIDWORD(v10);
  v18.right = v10;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  if ( v16 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v12);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
    }
    RGNOBJ::vSet((RGNOBJ *)&v16, &v18);
    *(_QWORD *)(*(_QWORD *)a1 + 1536LL) = v16;
    if ( v17 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    return v3;
  }
  if ( v17 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  return 0LL;
}
