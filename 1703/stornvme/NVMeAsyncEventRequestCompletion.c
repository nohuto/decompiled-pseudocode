/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C000E980
 * Callers:
 *     <none>
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     NVMeControllerReset @ 0x1C0005138 (NVMeControllerReset.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000EC38 (NVMeIssueAsyncEventCommand.c)
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

char __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // cl
  __int64 v9; // r15
  unsigned int v10; // edx
  unsigned __int8 v11; // r13
  unsigned int v12; // edi
  void *v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r12d
  unsigned int v17; // esi
  __int64 PhysicalAddress; // rax
  int v19; // edx
  int v20; // eax
  _QWORD v22[10]; // [rsp+20h] [rbp-50h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF
  char v24; // [rsp+C0h] [rbp+50h] BYREF
  void *v25; // [rsp+C8h] [rbp+58h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  v7 = v6 & 0xFFF;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - v7 + 4096;
  if ( !a3 || (v8 = *(_BYTE *)(a2 + 3), v8 == 14) || (LODWORD(v7) = *(_DWORD *)(a1 + 20), (v7 & 0xE) != 0) || v8 != 1 )
  {
    *(_BYTE *)(v6 + 4245) |= 8u;
    return v7;
  }
  memset((char *)v22 + 4, 0, 0x44uLL);
  v9 = 0LL;
  v23 = 72;
  if ( a2 == a1 + 568 )
  {
    v9 = a1 + 560;
  }
  else
  {
    v10 = 0;
    while ( a2 != 104LL * v10 + a1 + 672 )
    {
      if ( ++v10 >= 4 )
        goto LABEL_17;
    }
    v9 = 104LL * v10 + a1 + 664;
  }
LABEL_17:
  HIDWORD(v22[1]) = 0;
  v22[0] = 0x4800000100LL;
  BYTE4(v22[3]) = 1;
  v22[4] = 0x100000006LL;
  LODWORD(v22[5]) = 4;
  v22[6] = a3;
  StorPortExtendedFunction(16LL, a1, v22, &v23);
  v11 = *(_BYTE *)(a3 + 2);
  LODWORD(v7) = *(_DWORD *)a3 & 7;
  switch ( (_DWORD)v7 )
  {
    case 0:
      if ( *(_BYTE *)(a3 + 1) == 1 )
        NVMeControllerReset(a1, 0);
      v12 = 64;
LABEL_28:
      v25 = 0LL;
      LOBYTE(v7) = NVMeAllocateDmaBuffer(a1, v12);
      v13 = v25;
      if ( v25 )
      {
        if ( v9 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
            v14 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
          else
            v14 = *(unsigned __int8 *)(a2 + 7);
          if ( (unsigned int)v14 < *(_DWORD *)(a1 + 148) && (v15 = *(_QWORD *)(a1 + 8 * v14 + 1184)) != 0 )
            v16 = *(_DWORD *)(v15 + 16);
          else
            v16 = 0;
          v17 = v12 >> 2;
          if ( v12 >> 2 )
          {
            memset(v25, 0, 4LL * v17);
            v13 = v25;
          }
          PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v13, &v24);
          if ( v11 <= 5u && (v19 = 42, _bittest(&v19, v11)) || v11 == 0x80 )
            v16 = -1;
          *(_QWORD *)(v6 + 4120) = PhysicalAddress;
          *(_BYTE *)(v6 + 4136) = v11;
          v20 = *(_DWORD *)(v6 + 4136) ^ ((v17 - 1) << 16);
          *(_BYTE *)(v6 + 4096) = 2;
          *(_DWORD *)(v6 + 4136) ^= v20 & 0xFFF0000;
          *(_DWORD *)(v6 + 4100) = v16;
          *(_BYTE *)(v6 + 4245) |= 4u;
          *(_QWORD *)(v6 + 4216) = NVMeGetLogPageCompletion;
          *(_QWORD *)(v6 + 4200) = v25;
          *(_DWORD *)(v6 + 4232) = v12;
          LOBYTE(v7) = ProcessCommand(a1, v9 + 8);
        }
        return v7;
      }
      goto LABEL_44;
    case 1:
      v12 = 512;
      goto LABEL_28;
    case 6:
      LOBYTE(v7) = -*(_BYTE *)(a3 + 1);
      v12 = *(_BYTE *)(a3 + 1) == 0 ? 0x40 : 0;
      break;
    case 7:
      v12 = 512;
      break;
    default:
      goto LABEL_44;
  }
  if ( v12 )
    goto LABEL_28;
LABEL_44:
  if ( v9 )
    LOBYTE(v7) = NVMeIssueAsyncEventCommand(a1, v9);
  return v7;
}
