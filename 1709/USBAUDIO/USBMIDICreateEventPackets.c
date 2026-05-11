/*
 * XREFs of USBMIDICreateEventPackets @ 0x1C0021E64
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1C000671C (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C0005C38 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall USBMIDICreateEventPackets(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r10
  __int64 v4; // r15
  __int64 v5; // r13
  unsigned __int8 *v6; // r14
  __int64 v7; // rbx
  char v8; // r12
  char v9; // al
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // r13d
  __int64 v14; // rax
  int v15; // edx
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  unsigned int v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+50h] [rbp-58h]
  unsigned int *v25; // [rsp+C0h] [rbp+18h]
  bool v26; // [rsp+C8h] [rbp+20h]

  v25 = a3;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a1;
  v6 = *(unsigned __int8 **)(a2 + 48);
  v21 = *(_DWORD *)(a2 + 36) >> 2;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 136LL);
  v8 = 0;
  v26 = 0;
  if ( !*(_DWORD *)(v7 + 72) )
    goto LABEL_4;
  v9 = *(_BYTE *)(v4 + 8) & 0xF8;
  v26 = v9 == -8;
  if ( v9 == -8 )
  {
    *(_BYTE *)(v7 + 68) = 0;
LABEL_4:
    v10 = 0;
    goto LABEL_5;
  }
  *(_DWORD *)v6 = *(_DWORD *)(v7 + 76);
  v10 = *(_DWORD *)(v7 + 72);
LABEL_5:
  v11 = 0;
  v12 = 0;
  if ( *(_DWORD *)(v4 + 4) )
  {
    v13 = v21;
    do
    {
      if ( v12 >= v13 )
        break;
      v8 = 0;
      if ( v10 )
      {
        v22 = 1;
      }
      else
      {
        if ( !*(_BYTE *)(v7 + 69) || (v22 = 0, *(char *)(v11 + v4 + 8) < 0) )
          v22 = 1;
        *v6 = 16 * *(_BYTE *)(v7 + 20);
      }
      do
      {
        if ( v11 >= *(_DWORD *)(v4 + 4) )
          break;
        v14 = v10++;
        LOBYTE(a3) = *(_BYTE *)(v11 + v4 + 8);
        v11 += v22;
        v22 = 1;
        v8 = ((__int64 (__fastcall *)(__int64, unsigned __int8 *, unsigned int *))USBMidiOutCreateByte[v14])(v7, v6, a3);
      }
      while ( !v8 );
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v20) = v6[3];
        LODWORD(v19) = v6[2];
        LODWORD(v18) = v6[1];
        LODWORD(v17) = *v6;
        WPP_RECORDER_SF_DDDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v6[3],
          v6[2],
          v17 & 0xF,
          (__int64)&WPP_240749c47d003b5bf314be79ba5ba17c_Traceguids,
          v17,
          v18,
          v19,
          v20);
      }
      if ( v8 )
        v10 = 0;
      else
        *(_DWORD *)(v7 + 76) = *(_DWORD *)v6;
      v6 += 4;
      ++v12;
    }
    while ( v11 < *(_DWORD *)(v4 + 4) );
    v5 = a1;
    v3 = a2;
    if ( v8 )
    {
      v15 = *(_DWORD *)(v4 + 4);
      if ( v11 == v15 )
      {
        *v25 = *(_DWORD *)(a1 + 44);
      }
      else
      {
        *(_DWORD *)(v11 + *(_QWORD *)(a1 + 32) + 4LL) = v15 - v11;
        *v25 = v11;
      }
      goto LABEL_29;
    }
    a3 = v25;
  }
  --v12;
  *a3 = *(_DWORD *)(v5 + 44);
LABEL_29:
  if ( v26 )
    *(_BYTE *)(v7 + 68) = 1;
  else
    *(_DWORD *)(v7 + 72) = v10;
  *(_DWORD *)(*(_QWORD *)(v3 + 24) + 36LL) += 4 * v12;
  return v8;
}
