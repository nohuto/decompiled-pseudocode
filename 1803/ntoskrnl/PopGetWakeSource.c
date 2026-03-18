/*
 * XREFs of PopGetWakeSource @ 0x1405EDDD4
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PopDereferenceWakeInfos @ 0x140154F24 (PopDereferenceWakeInfos.c)
 *     PopGetCurrentWakeInfos @ 0x140154FBC (PopGetCurrentWakeInfos.c)
 *     PopCopyWakeSource @ 0x1407620BC (PopCopyWakeSource.c)
 *     PopWakeSourceSize @ 0x14076259C (PopWakeSourceSize.c)
 */

__int64 __fastcall PopGetWakeSource(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r14
  unsigned __int64 v3; // rbx
  _DWORD *v4; // rsi
  unsigned int CurrentWakeInfos; // eax
  __int64 v6; // rdx
  _QWORD *v7; // r9
  _QWORD *v8; // r13
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // r10
  _QWORD *v12; // r11
  _QWORD *v13; // r8
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // r15
  _DWORD *v19; // r12
  __int64 v20; // rcx
  _DWORD *v21; // r13
  __int64 v22; // rax
  _QWORD **v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r8
  _DWORD *v27; // r14
  _QWORD *v28; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+A0h] [rbp+8h]
  unsigned int v33; // [rsp+B0h] [rbp+18h]
  _QWORD *v34; // [rsp+B8h] [rbp+20h] BYREF

  v31 = (int)a1;
  v34 = 0LL;
  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( (_DWORD)v3 && !a1 )
    return 3221225485LL;
  KeWaitForSingleObject(&PopWakeSourceAvailable, Executive, 0, 0, 0LL);
  CurrentWakeInfos = PopGetCurrentWakeInfos(&v34);
  v8 = v34;
  v9 = CurrentWakeInfos;
  v33 = CurrentWakeInfos;
  v10 = (int)(4 * CurrentWakeInfos + 4);
  if ( CurrentWakeInfos )
  {
    v7 = v34;
    v11 = CurrentWakeInfos;
    do
    {
      v6 = *v7;
      v12 = (_QWORD *)(*v7 + 24LL);
      v13 = (_QWORD *)*v12;
      v10 = 4 * *(_DWORD *)(*v7 + 40LL) + 4 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      while ( v13 != v12 )
      {
        v25 = PopWakeSourceSize(v13);
        v13 = (_QWORD *)*v26;
        v10 = v25 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      ++v7;
      --v11;
    }
    while ( v11 );
  }
  if ( v10 <= v3 )
  {
    *v4 = v9;
    v30 = v9;
    v16 = (__int64)&v4[v9 + 1];
    v17 = v9;
    if ( (_DWORD)v9 )
    {
      v18 = v8;
      v19 = v4 + 1;
      do
      {
        v20 = *v18;
        v21 = (_DWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *v21 = *(_DWORD *)(*v18 + 40LL);
        *v19 = ((v16 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
        v22 = *(unsigned int *)(v20 + 40);
        v23 = (_QWORD **)(v20 + 24);
        v24 = *v23;
        v16 = (__int64)&v21[v22 + 1];
        if ( *v23 != v23 )
        {
          v27 = v21 + 1;
          v28 = v23;
          do
          {
            v29 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            *v27++ = ((v16 + 7) & 0xFFFFFFF8) - (_DWORD)v21;
            PopCopyWakeSource(v29, v6, v24, v7);
            v24 = (_QWORD *)*v24;
            v16 = v29 + *(unsigned int *)(v29 + 4);
          }
          while ( v24 != v28 );
          LODWORD(v4) = v31;
          v17 = v30;
        }
        ++v18;
        ++v19;
        v30 = --v17;
      }
      while ( v17 );
      LODWORD(v9) = v33;
      v8 = v34;
    }
    v2 = a2;
    v14 = 0;
  }
  else
  {
    v14 = -1073741789;
  }
  if ( (_DWORD)v9 )
    PopDereferenceWakeInfos(v9, v8);
  *v2 = v10;
  return v14;
}
