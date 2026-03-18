/*
 * XREFs of PoCreateThermalRequest @ 0x1406F69D0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400B526C (PoCaptureReasonContext.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopAssociateThermalRequest @ 0x1406F6D24 (PopAssociateThermalRequest.c)
 */

__int64 __fastcall PoCreateThermalRequest(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  _QWORD *v5; // rbx
  int v8; // edi
  _QWORD *PoolWithTag; // rax
  int v10; // r8d
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v5 = 0LL;
  *a1 = 0LL;
  if ( !a2 || !a3 || !a4 )
  {
    v8 = -1073741811;
    goto LABEL_10;
  }
  v8 = PoCaptureReasonContext(a4, 0LL, a3, 1, 0LL, &P);
  if ( v8 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x188uLL, 0x6C6F4350u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_11;
    }
    memset(PoolWithTag, 0, 0x188uLL);
    v10 = a5;
    v5[3] = P;
    *((_BYTE *)v5 + 16) = 100;
    v5[6] = MEMORY[0xFFFFF78000000008];
    v8 = PopAssociateThermalRequest(v5, a2, v10 >= 0);
    if ( v8 < 0 )
      goto LABEL_11;
    *a1 = v5;
LABEL_10:
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
LABEL_11:
  if ( P )
    PoDestroyReasonContext(P);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6C6F4350u);
  return (unsigned int)v8;
}
