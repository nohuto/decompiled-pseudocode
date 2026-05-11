/*
 * XREFs of USBMIDICreateEventPackets @ 0x1C00269A4
 * Callers:
 *     USBMidiOutCreateBulkUrbs @ 0x1C00069A4 (USBMidiOutCreateBulkUrbs.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C0005EB8 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

char __fastcall USBMIDICreateEventPackets(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // r10
  __int64 v4; // r15
  __int64 v5; // r8
  unsigned __int8 *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rdi
  char v9; // r12
  char v10; // al
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  unsigned int v22; // [rsp+50h] [rbp-58h]
  int v23; // [rsp+50h] [rbp-58h]
  bool v27; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a2;
  v6 = *(unsigned __int8 **)(a2 + 48);
  v7 = a1;
  v22 = *(_DWORD *)(a2 + 36) >> 2;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 152LL);
  v9 = 0;
  v27 = 0;
  if ( *(_DWORD *)(v8 + 72) )
  {
    v10 = *(_BYTE *)(v4 + 8) & 0xF8;
    v27 = v10 == -8;
    if ( v10 != -8 )
    {
      *(_DWORD *)v6 = *(_DWORD *)(v8 + 76);
      v11 = *(_DWORD *)(v8 + 72);
      goto LABEL_5;
    }
    *(_BYTE *)(v8 + 68) = 0;
  }
  v11 = 0;
LABEL_5:
  v12 = *(_DWORD *)(v4 + 4);
  v13 = 0;
  v14 = 0;
  if ( !v12 )
    goto LABEL_26;
  v15 = v22;
  do
  {
    if ( v14 >= v15 )
      break;
    v9 = 0;
    if ( v11 )
    {
      v23 = 1;
    }
    else
    {
      if ( !*(_BYTE *)(v8 + 69) || (v23 = 0, *(char *)(v13 + v4 + 8) < 0) )
        v23 = 1;
      *v6 = 16 * *(_BYTE *)(v8 + 20);
    }
    do
    {
      if ( v13 >= *(_DWORD *)(v4 + 4) )
        break;
      v16 = v11++;
      LOBYTE(v5) = *(_BYTE *)(v13 + v4 + 8);
      v13 += v23;
      v23 = 1;
      v9 = ((__int64 (__fastcall *)(__int64, unsigned __int8 *, __int64))USBMidiOutCreateByte[v16])(v8, v6, v5);
    }
    while ( !v9 );
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v21) = v6[3];
      LODWORD(v20) = v6[2];
      LODWORD(v19) = v6[1];
      LODWORD(v18) = *v6;
      WPP_RECORDER_SF_DDDD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6[3],
        v6[2],
        v18 & 0xF,
        (__int64)&WPP_a33f54caca333e77ddea1b1b2ddfeafe_Traceguids,
        v18,
        v19,
        v20,
        v21);
    }
    if ( v9 )
      v11 = 0;
    else
      *(_DWORD *)(v8 + 76) = *(_DWORD *)v6;
    v12 = *(_DWORD *)(v4 + 4);
    v6 += 4;
    ++v14;
  }
  while ( v13 < v12 );
  v7 = a1;
  v5 = a2;
  v3 = a3;
  if ( v9 )
  {
    if ( v13 != v12 )
    {
      *(_DWORD *)(v13 + *(_QWORD *)(a1 + 32) + 4LL) = v12 - v13;
      goto LABEL_28;
    }
  }
  else
  {
LABEL_26:
    --v14;
  }
  v13 = *(_DWORD *)(v7 + 44);
LABEL_28:
  *v3 = v13;
  if ( v27 )
    *(_BYTE *)(v8 + 68) = 1;
  else
    *(_DWORD *)(v8 + 72) = v11;
  *(_DWORD *)(*(_QWORD *)(v5 + 24) + 36LL) += 4 * v14;
  return v9;
}
