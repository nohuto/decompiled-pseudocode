/*
 * XREFs of PopPepRegisterDevice @ 0x140615470
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x14016EE60 (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     PopPepComponentGetResidencyIdleState @ 0x140079974 (PopPepComponentGetResidencyIdleState.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     PopPepInsertDevice @ 0x14016EF44 (PopPepInsertDevice.c)
 *     PopPepComponentGetLatencyIdleState @ 0x14016F01C (PopPepComponentGetLatencyIdleState.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall PopPepRegisterDevice(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  char v5; // bl
  unsigned int v9; // esi
  unsigned int v10; // r10d
  __int64 v11; // rdx
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r12
  char *PoolWithTag; // rax
  char *v21; // rdi
  char *v22; // r14
  char **v23; // r8
  char **v24; // rdx
  _BYTE *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // r13d
  __int64 *v28; // rax
  char *v29; // rbp
  __int64 v30; // r15
  _BYTE *v31; // rax
  unsigned __int64 v32; // rdx
  char **v33; // rcx
  char *v34; // r8
  char *v35; // r11
  int v36; // eax
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  char *v44; // [rsp+30h] [rbp-48h]
  __int64 v45; // [rsp+38h] [rbp-40h]
  size_t Size; // [rsp+90h] [rbp+18h]

  v5 = 0;
  *a5 = 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 )
  {
    v10 = 0;
    v11 = a3 + 16;
    v12 = 0;
    while ( 1 )
    {
      v13 = v10;
      v14 = *(_DWORD *)(*(_QWORD *)v11 + 28LL);
      if ( v14 <= 0 )
        break;
      v15 = v10 + v14;
      v16 = -1;
      if ( v15 >= v10 )
        v16 = v15;
      v10 = v16;
      if ( v15 < v13 )
        break;
      ++v12;
      v11 += 8LL;
      if ( v12 >= v9 )
      {
        v17 = 0LL;
        v18 = (int)(200 * v9 + 184);
        if ( v16 )
        {
          v17 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v18 = v17 + 24LL * v16;
        }
        v19 = (v18 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        Size = v19 + 60LL * (v9 + 1);
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x54706550u);
        v21 = PoolWithTag;
        if ( PoolWithTag )
        {
          DbgPrintEx(0x92u, 3u, "PopPep: register device (0x%p, %wZ)\n", PoolWithTag, a1);
          memset(v21, 0, Size);
          *((_QWORD *)v21 + 4) = a2;
          v44 = &v21[v17];
          v22 = &v21[v19];
          *((_QWORD *)v21 + 3) = *(_QWORD *)a3;
          KeInitializeEvent((PRKEVENT)(v21 + 40), NotificationEvent, 0);
          v23 = (char **)(v21 + 72);
          *((_DWORD *)v21 + 45) = v9;
          v24 = (char **)(v21 + 72);
          *((_DWORD *)v21 + 35) = v9;
          v21[136] = 1;
          v25 = &ActivityAttributes;
          v26 = 0LL;
          do
          {
            if ( v26 <= 5 && *v25 == 1 )
            {
              *v24 = v22;
              v22 += 20;
            }
            ++v26;
            ++v24;
            v25 += 136;
          }
          while ( (__int64)v25 < (__int64)AllowedCachedObjectNames );
          *((_QWORD *)v21 + 2) |= 1uLL;
          v27 = 0;
          v28 = (__int64 *)(a3 + 16);
          v45 = a3 + 16;
          v29 = v21 + 216;
          while ( 1 )
          {
            v30 = *v28;
            *((_DWORD *)v29 - 6) = v27;
            v31 = &ActivityAttributes;
            *((_DWORD *)v29 - 7) = 3;
            v32 = 0LL;
            v33 = v23;
            do
            {
              v34 = v22;
              if ( v32 <= 5 && *v31 == 1 )
                v34 = *v33;
              else
                v22 += 20;
              *(_QWORD *)&v29[-48LL - (_QWORD)v21 + (_QWORD)v33] = v34;
              ++v32;
              ++v33;
              v31 += 136;
            }
            while ( (__int64)v31 < (__int64)AllowedCachedObjectNames );
            KeInitializeEvent((PRKEVENT)v29, NotificationEvent, 0);
            v35 = v44;
            *((_QWORD *)v29 - 2) = *(_QWORD *)(v30 + 16);
            v36 = *(_DWORD *)(v30 + 28);
            *((_DWORD *)v29 + 39) = v36;
            v37 = v36 - 1;
            if ( (unsigned int)(v36 - 1) >= *(_DWORD *)(v30 + 24) )
              v37 = *(_DWORD *)(v30 + 24);
            *(_DWORD *)(v30 + 24) = v37;
            *((_QWORD *)v29 + 10) = -1LL;
            *((_DWORD *)v29 + 29) = v37;
            *((_QWORD *)v29 + 20) = v44;
            *((_QWORD *)v29 + 11) = 0LL;
            *((_QWORD *)v29 + 12) = 0LL;
            **((_DWORD **)v29 + 6) |= 4u;
            v38 = *(_DWORD *)(v30 + 28);
            if ( v38 > 1 )
            {
              *((_QWORD *)v21 + 2) &= ~1uLL;
              v38 = *(_DWORD *)(v30 + 28);
            }
            v39 = 0;
            if ( v38 )
              break;
LABEL_29:
            *((_DWORD *)v29 + 30) = 0;
            *((_DWORD *)v29 + 31) = PopPepComponentGetLatencyIdleState((__int64)(v29 - 32), *((_QWORD *)v29 + 10));
            *((_DWORD *)v29 + 32) = PopPepComponentGetResidencyIdleState(v41, *((_QWORD *)v29 + 11));
            ++v27;
            *((_DWORD *)v29 + 33) = *((_DWORD *)v29 + 39) - 1;
            *((_DWORD *)v29 + 34) = *((_DWORD *)v29 + 39) - 1;
            *((_DWORD *)v29 + 35) = *((_DWORD *)v29 + 39) - 1;
            v29 += 200;
            v28 = (__int64 *)(v45 + 8);
            v45 += 8LL;
            if ( v27 >= v9 )
            {
              v5 = 1;
              *a5 = v21;
              if ( a4 == 2 )
                v21[124] = 1;
              *((_DWORD *)v21 + 42) = 1;
              PopPepInsertDevice(v42, (__int64 *)v21);
              return v5;
            }
            v23 = (char **)(v21 + 72);
          }
          while ( v35 - v21 <= Size - 24 )
          {
            v40 = v39++;
            *(_QWORD *)v35 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 24 * v40);
            *((_QWORD *)v35 + 1) = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 24 * v40 + 8);
            v35 += 24;
            v44 = v35;
            if ( v39 >= *(_DWORD *)(v30 + 28) )
              goto LABEL_29;
          }
          ExFreePoolWithTag(v21, 0x54706550u);
        }
        return v5;
      }
    }
  }
  return v5;
}
