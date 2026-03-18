/*
 * XREFs of CmQueryMultipleValueKey @ 0x14048FF38
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140448D38 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFindNameInList @ 0x140490580 (CmpFindNameInList.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v10; // r14
  char PreviousMode; // r13
  _WORD *v12; // r12
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // edi
  const void *v22; // rsi
  unsigned __int64 v23; // rcx
  PVOID PoolWithTag; // rax
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // edi
  __int64 v28; // rax
  unsigned int v29; // r15d
  unsigned int v30; // edx
  unsigned int v31; // r8d
  __int64 *v32; // rcx
  unsigned int MultipleValueForLayeredKey; // ebx
  int v35; // ebx
  int v36; // r14d
  int v37; // eax
  int v38; // eax
  char v39; // [rsp+40h] [rbp-128h]
  unsigned int v40; // [rsp+44h] [rbp-124h]
  char v41; // [rsp+4Ah] [rbp-11Eh]
  unsigned int v42; // [rsp+4Ch] [rbp-11Ch]
  unsigned int v43; // [rsp+4Ch] [rbp-11Ch]
  size_t Size; // [rsp+58h] [rbp-110h] BYREF
  __int64 v45; // [rsp+60h] [rbp-108h] BYREF
  int v46; // [rsp+68h] [rbp-100h]
  int v47; // [rsp+6Ch] [rbp-FCh]
  __int64 v48; // [rsp+70h] [rbp-F8h]
  __int64 v49; // [rsp+78h] [rbp-F0h]
  void *v50[2]; // [rsp+80h] [rbp-E8h] BYREF
  int v51; // [rsp+90h] [rbp-D8h]
  void *Src; // [rsp+98h] [rbp-D0h] BYREF
  _DWORD v53[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _DWORD v54[2]; // [rsp+A8h] [rbp-C0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-B8h]
  unsigned int v56; // [rsp+B8h] [rbp-B0h]
  unsigned int v57; // [rsp+BCh] [rbp-ACh] BYREF
  unsigned int v58; // [rsp+C0h] [rbp-A8h] BYREF
  _DWORD v59[2]; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-98h]
  __int64 v61; // [rsp+D8h] [rbp-90h]
  _DWORD v62[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-80h] BYREF
  __int64 *v64; // [rsp+F0h] [rbp-78h]
  _WORD *v65; // [rsp+F8h] [rbp-70h]
  __int64 v66; // [rsp+100h] [rbp-68h]
  __int64 v67; // [rsp+108h] [rbp-60h]
  __int128 v68; // [rsp+110h] [rbp-58h]
  __int128 v69; // [rsp+120h] [rbp-48h]
  char v70; // [rsp+170h] [rbp+8h] BYREF
  __int64 v71; // [rsp+180h] [rbp+18h]
  unsigned int v72; // [rsp+188h] [rbp+20h]

  v72 = a4;
  v71 = a3;
  v61 = 0LL;
  v48 = 0LL;
  v50[0] = 0LL;
  v50[1] = 0LL;
  LODWORD(v45) = -1;
  v53[0] = -1;
  v53[1] = 0;
  v42 = 0;
  v40 = 0;
  LODWORD(Size) = 0;
  v39 = 0;
  v54[0] = -1;
  v54[1] = 0;
  v60 = 0LL;
  v62[0] = -1;
  v62[1] = 0;
  v10 = 0LL;
  v49 = 0LL;
  v63 = 0LL;
  v46 = 0;
  v47 = 0;
  Src = 0LL;
  v70 = 0;
  v59[0] = -1;
  v59[1] = 0;
  P = 0LL;
  v56 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v41 = PreviousMode;
  v65 = *(_WORD **)(a1 + 8);
  v12 = v65;
  CmpLockRegistry(0xFFFFFFFFLL);
  if ( v65[29] )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, a3, v72, a5, a6, a7, PreviousMode);
    CmpUnlockRegistry();
    return MultipleValueForLayeredKey;
  }
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    goto LABEL_4;
  CmpLockKcbShared(v65);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v35 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockKcb(v65);
LABEL_67:
    CmpUnlockRegistry();
    return (unsigned int)(v35 - 1073741444);
  }
  CmpUnlockKcb(v65);
  v36 = CmpTransSearchAddTransFromKeyBody(a1, &v63);
  if ( v36 >= 0 )
  {
    v10 = 0LL;
LABEL_4:
    if ( a2 )
    {
      v10 = *(_QWORD *)(a2 + 8);
      v49 = v10;
    }
    CmpLockTwoKcbsShared(v10, v12);
    v13 = v63;
    if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v63) )
    {
      if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v13) )
      {
        v16 = (*(_BYTE *)(a2 + 48) & 1) != 0 ? -1073740763 : -1073741444;
LABEL_80:
        CmpUnlockTwoKcbs(v49, v12);
        CmpUnlockRegistry();
        return (unsigned int)v16;
      }
      v14 = *((_QWORD *)v12 + 3);
      v66 = v14;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 2848), 1u);
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v14 + 8))(v14, *((unsigned int *)v12 + 8), v54);
      v67 = v15;
      if ( v15 )
      {
        CmpUpdateKeyNodeAccessBits(v14, v15, *((unsigned int *)v12 + 8));
        ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
        if ( v13 )
        {
          v37 = (unsigned __int8)v46;
          if ( *((_QWORD *)v12 + 35) == v13 )
            v37 = 1;
          v46 = v37;
        }
        if ( !v49 )
        {
LABEL_11:
          v16 = 0;
          v17 = 0LL;
          v18 = 0LL;
          while ( 1 )
          {
            v51 = v17;
            v19 = 0LL;
            if ( (unsigned int)v17 >= v72 )
              break;
            if ( v41 == 1 )
            {
              v64 = (__int64 *)(v71 + 24 * v17);
              v20 = *v64;
              if ( (unsigned __int64)*v64 >= 0x7FFFFFFF0000LL )
                v20 = 0x7FFFFFFF0000LL;
              v21 = *(_DWORD *)v20;
              LODWORD(v68) = v21;
              v22 = *(const void **)(v20 + 8);
              *((_QWORD *)&v68 + 1) = v22;
              v69 = v68;
              if ( (_WORD)v21 )
              {
                if ( ((unsigned __int8)v22 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v23 = (unsigned __int64)v22 + (unsigned __int16)v21;
                if ( v23 > 0x7FFFFFFF0000LL || v23 < (unsigned __int64)v22 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              if ( (v21 & 1) != 0 )
              {
                v16 = -1073741811;
                v19 = 0LL;
                v25 = v40;
                v26 = v42;
                goto LABEL_51;
              }
              if ( (_WORD)v21 && (unsigned __int16)v21 > v56 )
              {
                if ( P )
                  ExFreePoolWithTag(P, 0);
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v21, 0x20204D43u);
                P = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v16 = -1073741670;
                  v19 = 0LL;
                  v25 = v40;
                  v26 = v42;
                  goto LABEL_51;
                }
                v50[1] = PoolWithTag;
              }
              memmove(v50[1], v22, (unsigned __int16)v21);
              LOWORD(v50[0]) = v21;
              WORD1(v50[0]) = v21;
            }
            else
            {
              v64 = (__int64 *)(v71 + 24 * v17);
              *(_OWORD *)v50 = *(_OWORD *)*v64;
              LOWORD(v21) = v50[0];
            }
            while ( (_WORD)v21 && !*((_WORD *)v50[1] + ((unsigned __int64)(unsigned __int16)v21 >> 1) - 1) )
            {
              LOWORD(v21) = v21 - 2;
              LOWORD(v50[0]) = v21;
            }
            v27 = -1;
            LODWORD(v45) = -1;
            if ( v49 )
            {
              v18 = v61;
              v48 = v61;
              if ( (_BYTE)v47 )
              {
                CmpFindNameInList(v61, v49 + 272, (unsigned int)v50, 0, 0LL, (__int64)&v45);
                v27 = v45;
              }
              else
              {
                CmpFindNameInList(v61, v60 + 36, (unsigned int)v50, 0, 0LL, (__int64)&v57);
                v27 = v57;
                LODWORD(v45) = v57;
              }
            }
            if ( v27 == -1 )
            {
              v18 = v14;
              v48 = v14;
              if ( (_BYTE)v46 )
              {
                CmpFindNameInList(v14, (_DWORD)v12 + 272, (unsigned int)v50, 0, 0LL, (__int64)&v45);
                v27 = v45;
              }
              else
              {
                CmpFindNameInList(v14, v67 + 36, (unsigned int)v50, 0, 0LL, (__int64)&v58);
                v27 = v58;
              }
              if ( v27 == -1 )
              {
                v16 = -1073741772;
                v19 = 0LL;
                break;
              }
            }
            v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v18 + 8))(v18, v27, v53);
            v19 = v28;
            v45 = v28;
            if ( !v28 )
              goto LABEL_91;
            v29 = *(_DWORD *)(v28 + 4);
            if ( v29 >= 0x80000000 )
              v29 += 0x80000000;
            LODWORD(Size) = v29;
            v30 = (v40 + 3) & 0xFFFFFFFC;
            v40 = v30;
            v31 = (v42 + 3) & 0xFFFFFFFC;
            v43 = v31;
            if ( v29 + v30 > *a6 || v29 + v30 < v30 || v39 )
            {
              v39 = 1;
              v16 = 0;
            }
            else
            {
              v18 = v48;
              if ( !(unsigned __int8)CmpGetValueData(
                                       v48,
                                       v27,
                                       v28,
                                       (unsigned int)&Size,
                                       (__int64)&Src,
                                       (__int64)&v70,
                                       (__int64)v59) )
              {
LABEL_91:
                v16 = -1073741670;
                goto LABEL_56;
              }
              v29 = Size;
              memmove((void *)(a5 + v40), Src, (unsigned int)Size);
              v32 = v64;
              *((_DWORD *)v64 + 4) = *(_DWORD *)(v19 + 12);
              *((_DWORD *)v32 + 2) = v29;
              *((_DWORD *)v32 + 3) = v40;
              v16 = 0;
              if ( v70 )
              {
                ExFreePoolWithTag(Src, 0);
                v70 = 0;
              }
              else
              {
                (*(void (__fastcall **)(__int64, _DWORD *))(v48 + 16))(v48, v59);
              }
              Src = 0LL;
              v40 += v29;
              v31 = v43;
            }
            v42 = v29 + v31;
            v18 = v48;
            (*(void (__fastcall **)(__int64, _DWORD *))(v48 + 16))(v48, v53);
            LODWORD(v45) = -1;
            v17 = (unsigned int)(v51 + 1);
          }
          v25 = v40;
          v26 = v42;
LABEL_51:
          if ( v16 >= 0 )
          {
            if ( v39 )
              v16 = -2147483643;
            *a6 = v25;
            if ( a7 )
              *a7 = v26;
          }
LABEL_56:
          if ( v19 )
            (*(void (__fastcall **)(__int64, _DWORD *))(v18 + 16))(v18, v53);
          if ( v60 )
            (*(void (__fastcall **)(__int64, _DWORD *))(v61 + 16))(v61, v62);
          (*(void (__fastcall **)(__int64, _DWORD *))(v14 + 16))(v14, v54);
          CmpUnlockTwoKcbs(v49, v12);
          CmpUnlockRegistry();
          if ( P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v16;
        }
        v61 = *(_QWORD *)(v49 + 24);
        v60 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v61 + 8))(v61, *(unsigned int *)(v49 + 32), v62);
        if ( v60 )
        {
          if ( v13 )
          {
            v38 = (unsigned __int8)v47;
            if ( *(_QWORD *)(v49 + 280) == v13 )
              v38 = 1;
            v47 = v38;
          }
          goto LABEL_11;
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(v14 + 16))(v14, v54);
      }
      else
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
      }
      v16 = -1073741670;
      goto LABEL_80;
    }
    v35 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v49, v12);
    goto LABEL_67;
  }
  CmpUnlockRegistry();
  return (unsigned int)v36;
}
