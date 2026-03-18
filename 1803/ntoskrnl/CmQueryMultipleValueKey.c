/*
 * XREFs of CmQueryMultipleValueKey @ 0x1404A3418
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInList @ 0x1404A389C (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404ACECC (CmpLockTwoKcbsShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1406F0CB4 (CmQueryMultipleValueForLayeredKey.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  ULONG_PTR v10; // r12
  __int64 v11; // r14
  ULONG_PTR v12; // rsi
  ULONG_PTR v13; // r15
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // r9
  int v19; // r10d
  int v20; // edi
  unsigned int v21; // eax
  __int64 v22; // r13
  unsigned __int16 *v23; // r8
  unsigned __int16 i; // dx
  unsigned int v25; // r12d
  ULONG_PTR v26; // r13
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // r9d
  unsigned int v32; // edx
  unsigned __int16 *v33; // rdx
  unsigned int v34; // edx
  unsigned int MultipleValueForLayeredKey; // ebx
  int v37; // ebx
  int v38; // eax
  int v39; // eax
  char v40; // [rsp+40h] [rbp-E8h]
  unsigned int v41; // [rsp+44h] [rbp-E4h]
  int v42; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-DCh]
  int v44; // [rsp+50h] [rbp-D8h]
  unsigned int Size; // [rsp+54h] [rbp-D4h] BYREF
  int Size_4; // [rsp+58h] [rbp-D0h]
  ULONG_PTR v47; // [rsp+60h] [rbp-C8h]
  int v48; // [rsp+68h] [rbp-C0h]
  __int64 v49; // [rsp+70h] [rbp-B8h] BYREF
  void *Src; // [rsp+78h] [rbp-B0h] BYREF
  _DWORD v51[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+88h] [rbp-A0h]
  _DWORD v53[2]; // [rsp+90h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+98h] [rbp-90h] BYREF
  unsigned int v55; // [rsp+9Ch] [rbp-8Ch] BYREF
  unsigned __int16 *v56; // [rsp+A0h] [rbp-88h]
  _DWORD v57[2]; // [rsp+A8h] [rbp-80h] BYREF
  ULONG_PTR v58; // [rsp+B0h] [rbp-78h]
  _DWORD v59[2]; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-68h]
  __int64 v61; // [rsp+C8h] [rbp-60h]
  __int64 v62; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v63; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v64; // [rsp+E0h] [rbp-48h]
  char v65; // [rsp+130h] [rbp+8h] BYREF
  __int64 v66; // [rsp+140h] [rbp+18h]
  unsigned int v67; // [rsp+148h] [rbp+20h]

  v67 = a4;
  v66 = a3;
  v58 = 0LL;
  v10 = 0LL;
  v47 = 0LL;
  v51[0] = -1;
  v51[1] = 0;
  v43 = 0;
  v41 = 0;
  v40 = 0;
  v53[0] = -1;
  v53[1] = 0;
  v52 = 0LL;
  v59[0] = -1;
  v59[1] = 0;
  v11 = 0LL;
  v60 = 0LL;
  v49 = 0LL;
  LOBYTE(v48) = 0;
  LOBYTE(v44) = 0;
  Src = 0LL;
  v65 = 0;
  v57[0] = -1;
  v57[1] = 0;
  CmpLockRegistry(0xFFFFFFFFLL);
  v12 = *(_QWORD *)(a1 + 8);
  v63 = v12;
  if ( *(_WORD *)(v12 + 58) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v66, a4, a5, (__int64)a6, (__int64)a7);
    CmpUnlockRegistry();
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    ExAcquirePushLockSharedEx(v12 + 40, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(v12 + 48), 1u);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v37 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v12);
LABEL_51:
      CmpUnlockRegistry();
      return (unsigned int)(v37 - 1073741444);
    }
    CmpUnlockKcb(v12);
    Size_4 = CmpTransSearchAddTransFromKeyBody(a1, &v49);
    if ( Size_4 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)Size_4;
    }
  }
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v60 = v11;
  }
  CmpLockTwoKcbsShared(v11, v12);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v49) )
  {
    v38 = *(_DWORD *)(a1 + 48);
LABEL_50:
    v37 = (v38 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v11, v12);
    goto LABEL_51;
  }
  if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v49) )
  {
    v38 = *(_DWORD *)(a2 + 48);
    goto LABEL_50;
  }
  v13 = *(_QWORD *)(v12 + 24);
  v64 = v13;
  v14 = (volatile signed __int64 *)(v13 + 72);
  ExAcquirePushLockSharedEx(v13 + 72, 0LL);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v13 + 8))(v13, *(unsigned int *)(v12 + 32), v53);
  v62 = v15;
  if ( !v15 )
  {
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
    KeAbPostRelease(v13 + 72);
    goto LABEL_60;
  }
  CmpUpdateKeyNodeAccessBits(v13, v15, *(_DWORD *)(v12 + 32));
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
  KeAbPostRelease(v13 + 72);
  v17 = v49;
  if ( v49 )
  {
    v39 = (unsigned __int8)v48;
    if ( *(_QWORD *)(v12 + 280) == v49 )
      v39 = 1;
    v48 = v39;
  }
  if ( !v11 )
  {
    v18 = 0LL;
    LOBYTE(v19) = v44;
    goto LABEL_14;
  }
  v58 = *(_QWORD *)(v11 + 24);
  v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v58 + 8))(v58, *(unsigned int *)(v11 + 32), v59);
  v52 = v18;
  if ( !v18 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v13 + 16))(v13, v53);
LABEL_60:
    CmpUnlockTwoKcbs(v11, v12);
    CmpUnlockRegistry();
    return 3221225626LL;
  }
  LOBYTE(v19) = v44;
  if ( v17 )
  {
    v19 = (unsigned __int8)v44;
    if ( *(_QWORD *)(v11 + 280) == v17 )
      v19 = 1;
    v44 = v19;
  }
LABEL_14:
  v20 = 0;
  v21 = 0;
  while ( 1 )
  {
    Size_4 = v21;
    v22 = 0LL;
    if ( v21 >= v67 )
      break;
    v23 = (unsigned __int16 *)(v66 + 32LL * v21);
    v56 = v23;
    for ( i = *v23; i && !*(_WORD *)(*((_QWORD *)v23 + 1) + 2 * ((unsigned __int64)i >> 1) - 2); *v23 = i )
      i -= 2;
    v25 = -1;
    v42 = -1;
    if ( v11 )
    {
      v26 = v58;
      v47 = v58;
      if ( (_BYTE)v19 )
      {
        CmpFindNameInList(v58, v11 + 272, (_DWORD)v23, 0, 0LL, (__int64)&v42);
        v25 = v42;
      }
      else
      {
        CmpFindNameInList(v58, v18 + 36, (_DWORD)v23, 0, 0LL, (__int64)&v54);
        v25 = v54;
        v42 = v54;
      }
      LODWORD(v23) = (_DWORD)v56;
    }
    else
    {
      v26 = v47;
    }
    if ( v25 == -1 )
    {
      v26 = v13;
      v47 = v13;
      if ( (_BYTE)v48 )
      {
        CmpFindNameInList(v13, v12 + 272, (_DWORD)v23, 0, 0LL, (__int64)&v42);
        v25 = v42;
      }
      else
      {
        CmpFindNameInList(v13, v62 + 36, (_DWORD)v23, 0, 0LL, (__int64)&v55);
        v25 = v55;
      }
      if ( v25 == -1 )
      {
        v20 = -1073741772;
        v22 = 0LL;
        v10 = v47;
        break;
      }
    }
    v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *, __int64))(v26 + 8))(v26, v25, v51, v18);
    v22 = v27;
    v61 = v27;
    if ( !v27 )
    {
      v20 = -1073741670;
      v10 = v47;
      goto LABEL_41;
    }
    v28 = *(_DWORD *)(v27 + 4);
    v29 = v28 + 0x80000000;
    if ( v28 < 0x80000000 )
      v29 = v28;
    Size = v29;
    v30 = (v41 + 3) & 0xFFFFFFFC;
    v41 = v30;
    LODWORD(v49) = v30;
    v31 = (v43 + 3) & 0xFFFFFFFC;
    v43 = v31;
    v42 = v31;
    if ( v29 + v30 > *a6 || v29 + v30 < v30 || v40 )
    {
      v40 = 1;
      v10 = v47;
    }
    else
    {
      v32 = v25;
      v10 = v47;
      if ( !(unsigned __int8)CmpGetValueData(
                               v47,
                               v32,
                               v22,
                               (unsigned int)&Size,
                               (__int64)&Src,
                               (__int64)&v65,
                               (__int64)v57) )
      {
        v20 = -1073741670;
        goto LABEL_41;
      }
      memmove((void *)(a5 + v41), Src, Size);
      v33 = v56;
      *((_DWORD *)v56 + 6) = *(_DWORD *)(v22 + 12);
      *((_DWORD *)v33 + 4) = Size;
      *((_DWORD *)v33 + 5) = v41;
      if ( v65 )
      {
        ExFreePoolWithTag(Src, 0);
        v65 = 0;
      }
      else
      {
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v57);
      }
      Src = 0LL;
      v29 = Size;
      v41 += Size;
      v31 = v43;
    }
    v43 = v29 + v31;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v51);
    v21 = Size_4 + 1;
    v18 = v52;
    LOBYTE(v19) = v44;
  }
  v34 = v43;
  if ( v20 >= 0 )
  {
    if ( v40 )
      v20 = -2147483643;
    *a6 = v41;
    if ( a7 )
      *a7 = v34;
  }
LABEL_41:
  if ( v22 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v10 + 16))(v10, v51, v16, v18);
  if ( v52 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v58 + 16))(v58, v59, v16, v18);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v13 + 16))(v13, v53, v16, v18);
  CmpUnlockTwoKcbs(v11, v12);
  CmpUnlockRegistry();
  return (unsigned int)v20;
}
