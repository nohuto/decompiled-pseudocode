/*
 * XREFs of NVMeAsyncEventRequestCompletion @ 0x1C000F620
 * Callers:
 *     <none>
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     NVMeControllerReset @ 0x1C000559C (NVMeControllerReset.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000F8D8 (NVMeIssueAsyncEventCommand.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeAsyncEventRequestCompletion(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  char v8; // cl
  unsigned int v9; // r13d
  __int64 v10; // r15
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // edi
  void *v14; // r9
  unsigned __int8 v15; // cl
  __int64 v16; // rcx
  int v17; // r12d
  unsigned int v18; // esi
  int v19; // ecx
  __int64 v20; // rax
  _QWORD v21[10]; // [rsp+20h] [rbp-50h] BYREF
  int v22; // [rsp+B8h] [rbp+48h] BYREF
  void *v23; // [rsp+C0h] [rbp+50h]
  __int64 v24; // [rsp+C8h] [rbp+58h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  result = v6 & 0xFFF;
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - result + 4096;
  if ( !a3
    || (v8 = *(_BYTE *)(a2 + 3), v8 == 14)
    || (result = *(unsigned int *)(a1 + 20), (result & 0xE) != 0)
    || v8 != 1 )
  {
    *(_BYTE *)(v6 + 4253) |= 8u;
    return result;
  }
  v9 = 72;
  memset(v21, 0, 0x48uLL);
  v22 = 72;
  v10 = 0LL;
  if ( a2 == a1 + 600 )
  {
    v10 = a1 + 592;
  }
  else
  {
    v11 = 0;
    while ( a2 != 104LL * v11 + a1 + 704 )
    {
      if ( ++v11 >= 4 )
        goto LABEL_17;
    }
    v10 = 104LL * v11 + a1 + 696;
  }
LABEL_17:
  HIDWORD(v21[1]) = 0;
  v21[0] = 0x4800000100LL;
  BYTE4(v21[3]) = 1;
  v21[4] = 0x100000006LL;
  LODWORD(v21[5]) = 4;
  v21[6] = a3;
  StorPortExtendedFunction(16LL, a1, v21, &v22);
  result = *a3;
  LOBYTE(v9) = *((_BYTE *)a3 + 2);
  v12 = *a3 & 7;
  switch ( v12 )
  {
    case 0:
      if ( BYTE1(result) == 1 )
        NVMeControllerReset(a1, 0);
      v13 = 64;
LABEL_28:
      v23 = 0LL;
      v24 = 0LL;
      result = NVMeAllocateDmaBuffer(a1, v13);
      v14 = v23;
      if ( v23 )
      {
        if ( v10 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
            v15 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
          else
            v15 = *(_BYTE *)(a2 + 7);
          if ( (unsigned int)v15 < *(_DWORD *)(a1 + 156) && (v16 = *(_QWORD *)(a1 + 8LL * v15 + 1224)) != 0 )
            v17 = *(_DWORD *)(v16 + 16);
          else
            v17 = 0;
          v18 = v13 >> 2;
          if ( v13 >> 2 )
          {
            memset(v23, 0, 4LL * v18);
            v14 = v23;
          }
          if ( (unsigned __int8)v9 <= 5u && (v19 = 42, _bittest(&v19, v9)) || (_BYTE)v9 == 0x80 )
            v17 = -1;
          v20 = v24;
          *(_BYTE *)(v6 + 4136) = v9;
          *(_BYTE *)(v6 + 4096) = 2;
          *(_DWORD *)(v6 + 4100) = v17;
          *(_QWORD *)(v6 + 4120) = v20;
          *(_DWORD *)(v6 + 4136) ^= (*(_DWORD *)(v6 + 4136) ^ ((v18 - 1) << 16)) & 0xFFF0000;
          *(_BYTE *)(v6 + 4253) |= 4u;
          *(_QWORD *)(v6 + 4224) = NVMeGetLogPageCompletion;
          *(_QWORD *)(v6 + 4200) = v14;
          *(_QWORD *)(v6 + 4208) = v20;
          *(_DWORD *)(v6 + 4240) = v13;
          return ProcessCommand(a1, v10 + 8);
        }
        return result;
      }
      goto LABEL_44;
    case 1:
      v13 = 512;
      goto LABEL_28;
    case 6:
      result = (unsigned int)-(BYTE1(result) == 0);
      v13 = result & 0x40;
      break;
    case 7:
      v13 = 512;
      break;
    default:
      goto LABEL_44;
  }
  if ( v13 )
    goto LABEL_28;
LABEL_44:
  if ( v10 )
    return NVMeIssueAsyncEventCommand(a1, v10);
  return result;
}
