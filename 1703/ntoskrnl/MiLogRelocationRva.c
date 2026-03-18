/*
 * XREFs of MiLogRelocationRva @ 0x14049620C
 * Callers:
 *     MiParseComImage @ 0x140494F54 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x140496184 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x140497854 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x140497C20 (MiCaptureImageCfgContext.c)
 * Callees:
 *     PfSnLogPageFault @ 0x14005F114 (PfSnLogPageFault.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     PfLogFileDataAccess @ 0x140226EBC (PfLogFileDataAccess.c)
 */

void __fastcall MiLogRelocationRva(unsigned int a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbp
  __int16 v6; // di
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v6 = a1;
  v7 = MiOffsetToProtos(a4, a1, v12);
  if ( v7 )
  {
    v8 = (v12[0] << 12) + ((unsigned __int64)*(unsigned int *)(v7 + 36) << 9);
    if ( (PfSnNumActiveTraces || dword_140382C18) && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2 )
    {
      v9 = ((unsigned __int64)(v6 & 0xFFF) + v4 + 4095) >> 12;
      v10 = v9 + 1;
      if ( (v8 & 0xFFF) == 0 )
        v10 = v9;
      v11 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( dword_140382C18 )
        PfLogFileDataAccess(*(_QWORD *)(a3 + 24), (__int64)KeGetCurrentThread(), v11, v10, 0);
      if ( PfSnNumActiveTraces && v10 )
      {
        do
        {
          PfSnLogPageFault(a3, v11, 2);
          LODWORD(v11) = v11 + 4096;
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
