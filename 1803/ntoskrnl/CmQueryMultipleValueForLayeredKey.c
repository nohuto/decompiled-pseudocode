/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x1406F0CB4
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpIsValueTombstone @ 0x1404983A0 (CmpIsValueTombstone.c)
 *     CmpGetKeyNodeForKcb @ 0x1404A05A0 (CmpGetKeyNodeForKcb.c)
 *     CmpFindNameInListWithStatus @ 0x1404A38E0 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        size_t a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r13
  void *v10; // r15
  unsigned int v11; // r12d
  int started; // edi
  unsigned int i; // eax
  __int64 v14; // rdi
  unsigned __int16 j; // dx
  __int16 v16; // r14
  __int64 KcbAtLayerHeight; // rsi
  __int64 KeyNodeForKcb; // rax
  unsigned int v19; // r14d
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // edx
  __int64 v24; // rdx
  char v26; // [rsp+40h] [rbp-B8h]
  _BYTE v27[3]; // [rsp+41h] [rbp-B7h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-B4h]
  __int64 v29; // [rsp+48h] [rbp-B0h]
  void *Src; // [rsp+50h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-A0h]
  __int64 v32; // [rsp+60h] [rbp-98h] BYREF
  __int64 v33; // [rsp+68h] [rbp-90h] BYREF
  __int64 v34; // [rsp+70h] [rbp-88h] BYREF
  __int64 v35; // [rsp+78h] [rbp-80h]
  __int64 v36; // [rsp+80h] [rbp-78h]
  __int64 v37; // [rsp+88h] [rbp-70h]
  __int64 v38; // [rsp+90h] [rbp-68h]
  PPRIVILEGE_SET v39[12]; // [rsp+98h] [rbp-60h] BYREF
  size_t Size; // [rsp+100h] [rbp+8h] BYREF
  __int64 v41; // [rsp+108h] [rbp+10h]
  unsigned int v42; // [rsp+110h] [rbp+18h]
  __int64 v43; // [rsp+118h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  Size = a1;
  memset(v39, 0, 0x20uLL);
  WORD1(v39[0]) = -1;
  LOBYTE(v7) = 0;
  v8 = 0LL;
  v33 = 0xFFFFFFFFLL;
  v34 = 0xFFFFFFFFLL;
  v9 = 0LL;
  v36 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  v27[0] = 0;
  v32 = 0xFFFFFFFFLL;
  v11 = 0;
  v28 = 0;
  v26 = 0;
  v37 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v39, v37);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)v39);
    v7 = 1LL;
    v29 = 1LL;
    v27[1] = 1;
    started = CmpPerformKeyBodyDeletionCheck(Size, 0LL);
    if ( started >= 0 )
    {
      for ( i = 0; ; i = v7 + v31 )
      {
        v31 = i;
        if ( i >= v42 )
          break;
        v14 = v41 + 32LL * i;
        v35 = v14;
        for ( j = *(_WORD *)v14;
              j && !*(_WORD *)(*(_QWORD *)(v14 + 8) + 2 * (((unsigned __int64)j - v7) >> 1));
              *(_WORD *)v14 = j )
        {
          j -= 2;
        }
        LODWORD(Size) = -1;
        v16 = *(_WORD *)(v37 + 58);
        while ( v16 >= 0 )
        {
          KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v39, v16);
          if ( *(_WORD *)(KcbAtLayerHeight + 58) )
          {
            if ( *(_BYTE *)(KcbAtLayerHeight + 57) == (_BYTE)v29 )
              break;
          }
          if ( *(_DWORD *)(KcbAtLayerHeight + 32) == -1 )
          {
            --v16;
          }
          else
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v34, 0);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        (unsigned int *)(KeyNodeForKcb + 36),
                        v14,
                        0,
                        0LL,
                        (__int64)&Size);
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
              *(_QWORD *)(KcbAtLayerHeight + 24),
              &v34);
            if ( started >= 0 )
            {
              v9 = KcbAtLayerHeight;
              v36 = KcbAtLayerHeight;
              break;
            }
            if ( started != -1073741772 )
              goto LABEL_23;
            if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) )
              break;
            --v16;
            v14 = v35;
          }
        }
        v19 = Size;
        if ( (_DWORD)Size == -1 )
        {
          started = -1073741772;
LABEL_23:
          LOBYTE(v7) = v29;
          goto LABEL_44;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 8LL))(
               *(_QWORD *)(v9 + 24),
               (unsigned int)Size,
               &v33);
        v38 = v8;
        if ( CmpIsValueTombstone(*(_QWORD *)(v9 + 24), v8) )
        {
          started = -1073741772;
LABEL_26:
          LOBYTE(v7) = v29;
          goto LABEL_45;
        }
        v21 = *(_DWORD *)(v8 + 4);
        v22 = v21 + 0x80000000;
        if ( v21 < 0x80000000 )
          v22 = *(_DWORD *)(v8 + 4);
        LODWORD(Size) = v22;
        v11 = (v11 + 7) & 0xFFFFFFF8;
        v23 = (v28 + 7) & 0xFFFFFFF8;
        v28 = v23;
        if ( v26 || v22 + v11 > *a5 || v22 + v11 < v11 )
        {
          v7 = v29;
          v26 = v29;
        }
        else
        {
          if ( !CmpGetValueData(v20, v19, v8, (unsigned int *)&Size, (__int64)&Src, (__int64)v27, (__int64)&v32) )
          {
            started = -1073741670;
            v10 = Src;
            goto LABEL_26;
          }
          v22 = Size;
          memmove((void *)(v43 + v11), Src, (unsigned int)Size);
          v24 = v35;
          *(_DWORD *)(v35 + 24) = *(_DWORD *)(v8 + 12);
          *(_DWORD *)(v24 + 16) = v22;
          *(_DWORD *)(v24 + 20) = v11;
          v11 += v22;
          if ( v27[0] )
            ExFreePoolWithTag(Src, 0);
          else
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v32);
          v10 = 0LL;
          Src = 0LL;
          v20 = *(_QWORD *)(v9 + 24);
          v7 = v29;
          v23 = v28;
        }
        v28 = v22 + v23;
        (*(void (__fastcall **)(__int64, __int64 *))(v20 + 16))(v20, &v33);
      }
      *a5 = v11;
      if ( a6 )
        *a6 = v28;
      started = -2147483643;
      if ( !v26 )
        started = 0;
LABEL_44:
      v8 = 0LL;
    }
  }
LABEL_45:
  if ( v10 )
  {
    if ( v27[0] )
      ExFreePoolWithTag(v10, 0);
    else
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v32);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v33);
  if ( (_BYTE)v7 )
    CmpUnlockKcbStack((__int64)v39);
  if ( v39[3] )
    CmSiFreeMemory(v39[3]);
  return (unsigned int)started;
}
