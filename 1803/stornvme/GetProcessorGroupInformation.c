/*
 * XREFs of GetProcessorGroupInformation @ 0x1C00035F4
 * Callers:
 *     NVMeControllerFilterResouceRequirements @ 0x1C0004AEC (NVMeControllerFilterResouceRequirements.c)
 * Callees:
 *     memset @ 0x1C0014380 (memset.c)
 */

char __fastcall GetProcessorGroupInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v4; // r14
  unsigned __int16 v5; // di
  __int64 v6; // r8
  unsigned __int16 *v8; // r15
  __int64 v9; // r9
  unsigned __int16 v10; // ax
  __int16 v11; // dx
  unsigned int v12; // eax
  char *v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  char result; // al

  v4 = (void **)(a1 + 184);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 184);
  if ( v6 )
  {
    StorPortExtendedFunction(1LL, a1, v6, a4);
    *v4 = 0LL;
  }
  v8 = (unsigned __int16 *)(a1 + 168);
  *(_WORD *)(a1 + 170) = 0;
  *(_WORD *)(a1 + 168) = 0;
  StorPortExtendedFunction(18LL, a1, a1 + 168, a4);
  v10 = *(_WORD *)(a1 + 168);
  if ( v10 && (StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)v10, 1701672526LL), *v4) )
  {
    v11 = *v8;
    v12 = (16 * (unsigned int)*v8) >> 2;
    if ( v12 )
    {
      memset(*v4, 0, 4LL * v12);
      v11 = *v8;
    }
    if ( v11 )
    {
      v13 = (char *)*v4;
      do
      {
        v14 = 16LL * v5;
        StorPortExtendedFunction(19LL, a1, v5, &v13[v14 + 8]);
        *(_WORD *)((char *)*v4 + v14) = v5++;
        v15 = *(_DWORD *)((char *)*v4 + v14 + 8) - ((*(_DWORD *)((char *)*v4 + v14 + 8) >> 1) & 0x55555555);
        *(_WORD *)((char *)*v4 + v14 + 2) = (unsigned __int16)((16843009
                                                              * (((v15 & 0x33333333)
                                                                + ((v15 >> 2) & 0x33333333)
                                                                + (((v15 & 0x33333333) + ((v15 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v16 = HIDWORD(*(_QWORD *)((char *)*v4 + v14 + 8))
            - (((unsigned int)HIDWORD(*(_QWORD *)((char *)*v4 + v14 + 8)) >> 1) & 0x55555555);
        *(_WORD *)((char *)*v4 + v14 + 2) += (unsigned __int16)((16843009
                                                               * (((v16 & 0x33333333)
                                                                 + ((v16 >> 2) & 0x33333333)
                                                                 + (((v16 & 0x33333333) + ((v16 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v13 = (char *)*v4;
        *(_WORD *)(a1 + 170) += *(_WORD *)((char *)*v4 + v14 + 2);
      }
      while ( v5 < *v8 );
    }
    return 1;
  }
  else
  {
    if ( *v4 )
    {
      StorPortExtendedFunction(1LL, a1, *v4, v9);
      *v4 = 0LL;
    }
    *v8 = 0;
    result = 0;
    *(_WORD *)(a1 + 170) = 0;
  }
  return result;
}
