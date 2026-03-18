/*
 * XREFs of CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14044BDE0 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpSwapValueInList @ 0x1401309B8 (CmpSwapValueInList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14044C464 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x14044C4B0 (CmpLightWeightCreateSetValueData.c)
 *     CmpMarkValueDataDirty @ 0x140473AF8 (CmpMarkValueDataDirty.c)
 *     CmpFreeValue @ 0x140476A50 (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x140476AC8 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x140477BF0 (CmpAddValueKeyNew.c)
 *     CmpFindNameInList @ 0x140479444 (CmpFindNameInList.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 *     CmpInitializeValueNameString @ 0x14059D1F8 (CmpInitializeValueNameString.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rbx
  void *v2; // r13
  __int64 v4; // rax
  ULONG_PTR v5; // rdi
  int v6; // ebx
  _QWORD *TransientPoolWithTag; // rax
  _WORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r12d
  PVOID PoolWithTag; // rax
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  size_t Size; // [rsp+20h] [rbp-59h]
  _DWORD v20[2]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v21[2]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v22[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v23[2]; // [rsp+58h] [rbp-21h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-19h]
  __int64 v25; // [rsp+68h] [rbp-11h]
  PVOID P; // [rsp+70h] [rbp-9h]
  __int64 v27; // [rsp+78h] [rbp-1h]
  _WORD v28[40]; // [rsp+80h] [rbp+7h] BYREF
  char v29; // [rsp+E0h] [rbp+67h]
  char v30; // [rsp+E8h] [rbp+6Fh] BYREF
  _DWORD *v31; // [rsp+F0h] [rbp+77h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *(_DWORD **)(a1 + 104);
  v2 = 0LL;
  v23[1] = 0;
  v25 = 0LL;
  v21[1] = 0;
  v22[1] = 0;
  v20[1] = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v23[0] = -1;
  v21[0] = -1;
  v22[0] = -1;
  v20[0] = -1;
  v5 = *(_QWORD *)(v4 + 24);
  BugCheckParameter3 = 0LL;
  v29 = 0;
  v30 = 0;
  v31 = v1;
  if ( !v1 )
  {
    v6 = CmpLightWeightCreateSetValueData(a1, &v31);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v1 = v31;
    CmpLightWeightUpdateSharedSetValueData(v31, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, 0x10uLL, 0x77554D43u);
  v8 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  *TransientPoolWithTag = 0LL;
  TransientPoolWithTag[1] = 0LL;
  *(_DWORD *)TransientPoolWithTag = -1;
  *((_DWORD *)TransientPoolWithTag + 1) = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *(unsigned int *)(a1 + 92), v23);
  v10 = v9;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 4);
    if ( v11 >= 0x80000000 )
    {
      v12 = v11 + 0x80000000;
      LODWORD(v31) = v11 + 0x80000000;
    }
    else
    {
      v12 = v11;
      LODWORD(v31) = v11;
    }
    if ( v12 )
    {
      if ( v11 >= 0x80000000 )
      {
        v2 = (void *)(v10 + 8);
      }
      else
      {
        if ( !(unsigned __int8)CmpGetValueData(
                                 v5,
                                 *(_DWORD *)(a1 + 92),
                                 v10,
                                 (unsigned int)&v31,
                                 (__int64)&BugCheckParameter3,
                                 (__int64)&v30,
                                 (__int64)v22) )
        {
          v6 = -1073741670;
LABEL_31:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v23);
          goto LABEL_32;
        }
        v2 = (void *)BugCheckParameter3;
        v12 = (unsigned int)v31;
        v29 = 1;
      }
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL)) )
    {
      v6 = -1073741443;
LABEL_27:
      if ( v29 && v2 )
      {
        if ( v30 )
          ExFreePoolWithTag(v2, 0);
        else
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v22);
      }
      goto LABEL_31;
    }
    v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(
            v5,
            *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL),
            v21);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
LABEL_25:
      if ( v27 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v21);
      goto LABEL_27;
    }
    CmpInitializeValueNameString(v10, v28, PoolWithTag);
    v24 = v1 + 1;
    if ( !(unsigned __int8)CmpFindNameInList(
                             v5,
                             (int)v1 + 4,
                             (unsigned int)v28,
                             0,
                             (__int64)&v31,
                             (__int64)&BugCheckParameter3)
      || (LODWORD(Size) = v12, v14 = CmpAddValueKeyNew(v5, Size, *(_DWORD *)(a1 + 72)), v14 == -1) )
    {
      v6 = -1073741670;
LABEL_24:
      ExFreePoolWithTag(P, 0);
      goto LABEL_25;
    }
    v15 = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
      v16 = CmpAddValueToListEx(v5, v14, (_DWORD)v31, *(_DWORD *)(a1 + 72), (__int64)v24, 1);
      goto LABEL_18;
    }
    if ( (unsigned __int8)HvpMarkCellDirty(v5, (unsigned int)BugCheckParameter3) )
    {
      v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v15, v20);
      if ( v25 )
      {
        if ( !(unsigned __int8)CmpMarkValueDataDirty(v5) )
        {
          v6 = -1073741443;
LABEL_20:
          if ( v25 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v20);
          goto LABEL_22;
        }
        v16 = CmpSwapValueInList(v5, v14, (unsigned int)v31, (__int64)v24);
LABEL_18:
        v6 = v16;
        if ( v16 >= 0 )
        {
          v6 = 0;
          v8[4] = v28[0];
          v17 = BugCheckParameter3;
          *(_DWORD *)v8 = v14;
          *((_DWORD *)v8 + 1) = v17;
          *((_DWORD *)v8 + 3) = v12;
          *(_QWORD *)(a1 + 112) = v8;
          v8 = 0LL;
          v14 = -1;
        }
        goto LABEL_20;
      }
      v6 = -1073741670;
    }
    else
    {
      v6 = -1073741443;
    }
LABEL_22:
    if ( v14 != -1 )
      CmpFreeValue(v5, v14);
    goto LABEL_24;
  }
  v6 = -1073741670;
LABEL_32:
  if ( v8 )
    CmpFreeTransientPoolWithTag(v8, 0x77554D43u);
  return (unsigned int)v6;
}
