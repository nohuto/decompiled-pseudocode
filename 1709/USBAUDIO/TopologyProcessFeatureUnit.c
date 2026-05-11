/*
 * XREFs of TopologyProcessFeatureUnit @ 0x1C0016020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TopologyProcessFeatureUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rcx
  __int64 v8; // r8
  NTSTATUS v9; // ebx
  unsigned int *v10; // rdx
  int v11; // r14d
  __int64 v12; // r12
  int v13; // r15d
  unsigned int v14; // r13d
  unsigned int *v15; // r10
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  int v18; // ebp
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(int, int, int, int, int, __int64); // rax
  unsigned int v28; // ecx
  PVOID PoolWithTag; // rax
  __int64 v30; // r14
  __int64 v31; // r12
  int v32; // ebp
  __int64 v33; // r13
  _DWORD *v34; // r8
  unsigned __int64 v35; // r9
  GUID *v36; // rax
  NTSTATUS v37; // eax
  __int64 result; // rax
  int v39; // [rsp+20h] [rbp-78h]
  int v40; // [rsp+24h] [rbp-74h]
  unsigned __int64 v41; // [rsp+28h] [rbp-70h]
  unsigned int *v42; // [rsp+30h] [rbp-68h]
  __int64 v43; // [rsp+38h] [rbp-60h]
  int v44; // [rsp+40h] [rbp-58h]
  __int64 v45; // [rsp+48h] [rbp-50h]
  __int64 v46; // [rsp+50h] [rbp-48h]
  unsigned int v49; // [rsp+B8h] [rbp+20h]

  v6 = a6;
  v8 = a2;
  v9 = 0;
  v10 = a5;
  v11 = *a6;
  v12 = *(_QWORD *)(v8 + 72);
  v13 = *(_DWORD *)(v8 + 68);
  v14 = *a5;
  v15 = (unsigned int *)(a4 + 16LL * *a6);
  v39 = *(_DWORD *)(v8 + 28);
  v49 = *a5;
  v43 = v12;
  v16 = **(_DWORD **)(v8 + 56);
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
      {
LABEL_68:
        v6 = a6;
        v10 = a5;
        goto LABEL_69;
      }
      v17 = 0;
      v18 = v13 - (v13 & (v13 - 1));
      v40 = v18;
      v13 &= v13 - 1;
      v19 = 152LL * v14;
      *(_DWORD *)(v19 + a3 + 88) = 0;
      v20 = 0LL;
      do
      {
        if ( (v18 & *(_DWORD *)(v12 + 4 * v20)) != 0 )
        {
          ++v17;
          v21 = 2 * v39 + 1;
          v22 = v21 & (2 * v39);
          v23 = v21 - v22;
          if ( v20 )
          {
            v24 = v20;
            do
            {
              v25 = v22;
              v22 &= v22 - 1;
              v23 = v25 - v22;
              --v24;
            }
            while ( v24 );
            v8 = a2;
          }
          *(_DWORD *)(v19 + a3 + 88) |= v23;
        }
        ++v20;
      }
      while ( v20 <= *(unsigned int *)(*(_QWORD *)(v8 + 56) + 4LL) );
      v26 = 0LL;
      v14 = v49;
      *(_DWORD *)(v19 + a3 + 80) = *(_DWORD *)(v8 + 16);
      ++v11;
      *(_DWORD *)(v19 + a3 + 92) = v17;
      v15[1] = 0;
      *v15 = v16;
      v15[2] = v49;
      v15[3] = 1;
      v15 += 4;
      v42 = v15;
      v44 = v11;
      if ( v18 == 2048 )
        v26 = 16LL;
      if ( v18 == 512 )
        v26 = 14LL;
      if ( v18 == 256 )
        v26 = 13LL;
      if ( v18 == 128 )
        v26 = 12LL;
      if ( v18 == 1024 )
        v26 = 15LL;
      if ( v18 == 64 )
        v26 = 11LL;
      if ( v18 == 32 )
        v26 = 10LL;
      if ( v18 == 16 )
        v26 = 9LL;
      if ( v18 == 2 )
        v26 = 8LL;
      if ( v18 == 1 )
        v26 = 7LL;
      if ( (_DWORD)v26 == 7 )
        break;
      if ( (unsigned int)v26 <= 7 )
        goto LABEL_39;
      if ( (unsigned int)v26 <= 0xB )
      {
        v27 = USBCntrlGetSetDbLevel;
        goto LABEL_38;
      }
      if ( (_DWORD)v26 == 12 )
      {
        *(_QWORD *)(v19 + a3 + 136) = USBCntrlGetSetGEQ;
        goto LABEL_40;
      }
      if ( (((_DWORD)v26 - 13) & 0xFFFFFFFC) == 0 && (_DWORD)v26 != 14 )
        break;
LABEL_39:
      if ( !(_DWORD)v26 )
      {
        v9 = -1073741438;
        goto LABEL_67;
      }
LABEL_40:
      *(_DWORD *)(v19 + a3 + 76) = v26;
      v45 = 4 * v26;
      *(_QWORD *)(v19 + a3 + 8) = NodeDescriptorInfo[4 * v26];
      *(_QWORD *)(v19 + a3 + 16) = NodeDescriptorInfo[4 * v26 + 1];
      v41 = v17;
      v46 = LODWORD(NodeDescriptorInfo[4 * v26 + 2]);
      v28 = -1;
      if ( (unsigned __int64)v17 * v46 <= 0xFFFFFFFF )
        v28 = v17 * v46;
      else
        v9 = -1073741306;
      if ( v9 < 0 )
        goto LABEL_63;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v28, 0x41627845u);
      *(_QWORD *)(v19 + a3 + 128) = PoolWithTag;
      if ( !PoolWithTag )
        v9 = -1073741670;
      if ( v9 >= 0 )
      {
        *(_DWORD *)(v19 + a3 + 96) = 0;
        v30 = 0LL;
        v31 = -1LL;
        v32 = *(_DWORD *)(v19 + a3 + 88);
        if ( v41 )
        {
          v33 = 0LL;
          while ( v9 >= 0 )
          {
            v34 = (_DWORD *)(v33 + *(_QWORD *)(v19 + a3 + 128));
            do
              ++v31;
            while ( (v40 & *(_DWORD *)(v43 + 4 * v31)) == 0 );
            v35 = v41;
            *v34 = v30;
            v34[2] = v31;
            v34[1] = (v32 - (v32 & (unsigned int)(v32 - 1))) >> 1;
            v32 &= v32 - 1;
            v36 = NodeDescriptorInfo[v45 + 3];
            if ( v36 )
            {
              v37 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, unsigned __int64))v36)(a1, v19 + a3, v34, v41);
              v35 = v41;
              v9 = v37;
            }
            if ( v9 >= 0 )
              *(_DWORD *)(v19 + a3 + 96) |= 1 << v30;
            v33 += v46;
            if ( ++v30 >= v35 )
            {
              v14 = v49;
              goto LABEL_58;
            }
          }
LABEL_60:
          ExFreePool(*(PVOID *)(v19 + a3 + 128));
          v14 = v49;
        }
        else
        {
LABEL_58:
          if ( v9 < 0 )
            goto LABEL_60;
          v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v19 + a3 + 128), ExFreePool);
          if ( v9 < 0 )
            goto LABEL_60;
        }
        v12 = v43;
        v11 = v44;
      }
      v8 = a2;
      v15 = v42;
LABEL_63:
      v16 = v14++ | 0x80000000;
      v49 = v14;
LABEL_67:
      if ( !v13 )
        goto LABEL_68;
    }
    v27 = USBCntrlGetSetBoolean;
LABEL_38:
    *(_QWORD *)(v19 + a3 + 136) = v27;
    goto LABEL_39;
  }
LABEL_69:
  *v10 = v14;
  result = (unsigned int)v9;
  *v6 = v11;
  return result;
}
