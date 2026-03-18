/*
 * XREFs of PopPepRegisterDevice @ 0x1405CA9C8
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x140146FD8 (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140123B5C (PopPepComponentGetResidencyIdleState.c)
 *     PopPepInsertDevice @ 0x1401470BC (PopPepInsertDevice.c)
 *     PopPepComponentGetLatencyIdleState @ 0x140147194 (PopPepComponentGetLatencyIdleState.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  char *v22; // rbp
  unsigned __int64 v23; // rcx
  _BYTE *v24; // rax
  char **v25; // rdx
  unsigned int v26; // r12d
  __int64 v27; // rsi
  __int64 *v28; // r13
  char *i; // r14
  __int64 v30; // r15
  _BYTE *v31; // rdx
  char **v32; // rcx
  unsigned __int64 v33; // r8
  char *v34; // r11
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v43; // [rsp+30h] [rbp-58h]
  size_t Size; // [rsp+38h] [rbp-50h]
  char *v45; // [rsp+40h] [rbp-48h]
  unsigned int v46; // [rsp+A0h] [rbp+18h]

  v5 = 0;
  *a5 = 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  v46 = v9;
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
          v45 = &v21[v17];
          v22 = &v21[v19];
          *((_QWORD *)v21 + 3) = *(_QWORD *)a3;
          KeInitializeEvent((PRKEVENT)(v21 + 40), NotificationEvent, 0);
          v23 = 0LL;
          *((_DWORD *)v21 + 45) = v9;
          v24 = &ActivityAttributes;
          *((_DWORD *)v21 + 35) = v9;
          v25 = (char **)(v21 + 72);
          v21[136] = 1;
          do
          {
            if ( v23 <= 5 && *v24 == 1 )
            {
              *v25 = v22;
              v22 += 20;
            }
            ++v23;
            ++v25;
            v24 += 136;
          }
          while ( (__int64)v24 < (__int64)&PopNotifyWork );
          *((_QWORD *)v21 + 2) |= 1uLL;
          v26 = 0;
          v27 = -168LL;
          v28 = (__int64 *)(a3 + 16);
          v43 = -168LL;
          for ( i = v21 + 200; ; i += 200 )
          {
            v30 = *v28;
            v31 = &ActivityAttributes;
            *((_DWORD *)i - 2) = v26;
            v32 = (char **)(i + 40);
            *((_DWORD *)i - 3) = 3;
            v33 = 0LL;
            do
            {
              if ( v33 <= 5 && *v31 == 1 )
              {
                *v32 = *(char **)((char *)v32 + v27);
              }
              else
              {
                *v32 = v22;
                v22 += 20;
              }
              ++v33;
              ++v32;
              v31 += 136;
            }
            while ( (__int64)v31 < (__int64)&PopNotifyWork );
            KeInitializeEvent((PRKEVENT)(i + 16), NotificationEvent, 0);
            v34 = v45;
            *(_QWORD *)i = *(_QWORD *)(v30 + 16);
            v35 = *(_DWORD *)(v30 + 28);
            *((_DWORD *)i + 43) = v35;
            v36 = v35 - 1;
            v37 = *(_DWORD *)(v30 + 24);
            if ( v36 < v37 )
              v37 = v36;
            *(_DWORD *)(v30 + 24) = v37;
            *((_QWORD *)i + 12) = -1LL;
            *((_DWORD *)i + 33) = v37;
            *((_QWORD *)i + 22) = v45;
            *((_QWORD *)i + 13) = 0LL;
            *((_QWORD *)i + 14) = 0LL;
            **((_DWORD **)i + 8) |= 4u;
            if ( *(_DWORD *)(v30 + 28) > 1u )
              *((_QWORD *)v21 + 2) &= ~1uLL;
            v38 = 0;
            if ( *(_DWORD *)(v30 + 28) )
              break;
LABEL_29:
            *((_DWORD *)i + 34) = 0;
            *((_DWORD *)i + 35) = PopPepComponentGetLatencyIdleState((__int64)(i - 16), *((_QWORD *)i + 12));
            *((_DWORD *)i + 36) = PopPepComponentGetResidencyIdleState(v40, *((_QWORD *)i + 13));
            ++v26;
            ++v28;
            *((_DWORD *)i + 37) = *((_DWORD *)i + 43) - 1;
            *((_DWORD *)i + 38) = *((_DWORD *)i + 43) - 1;
            *((_DWORD *)i + 39) = *((_DWORD *)i + 43) - 1;
            v43 -= 200LL;
            if ( v26 >= v46 )
            {
              v5 = 1;
              *a5 = v21;
              if ( a4 == 2 )
                v21[124] = 1;
              *((_DWORD *)v21 + 42) = 1;
              PopPepInsertDevice(v41, (__int64 *)v21);
              return v5;
            }
            v27 = v43;
          }
          while ( v34 - v21 <= Size - 24 )
          {
            v39 = v38++;
            *(_QWORD *)v34 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 24 * v39);
            *((_QWORD *)v34 + 1) = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 24 * v39 + 8);
            v34 += 24;
            v45 = v34;
            if ( v38 >= *(_DWORD *)(v30 + 28) )
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
