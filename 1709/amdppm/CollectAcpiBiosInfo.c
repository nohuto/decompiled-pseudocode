/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C0030294
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00303D4 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C001E5D4 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(_DWORD *a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-10h]
  _DWORD *Signature; // [rsp+40h] [rbp+8h] BYREF

  Signature = a1;
  AcpiTable = (unsigned int)GetAcpiTable((ULONG)a1, (ULONG)&Signature, a3, a4);
  v5 = AcpiTable;
  if ( AcpiTable >= 0 )
  {
    if ( Signature[14] )
    {
      dword_1C0011BB4 = 268439553;
      dword_1C0011BBC = 0;
      dword_1C0011BB8 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C0011BC0 = 268439553;
      HIDWORD(qword_1C0011BC4) = 0;
      LODWORD(qword_1C0011BC4) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C0011BCC = 268439553;
      dword_1C0011BD4 = 0;
      dword_1C0011BD0 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C0011BD8 = 268439553;
      HIDWORD(qword_1C0011BDC) = 0;
      LODWORD(qword_1C0011BDC) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C0011BE4 = 134219777;
      dword_1C0011BEC = 0;
      dword_1C0011BE8 = Signature[18];
    }
    dword_1C0011BF0 = Signature[12];
    byte_1C0011BF6 = *((_BYTE *)Signature + 105);
    byte_1C0011BF7 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C0011BB2 = *((_WORD *)Signature + 49);
    byte_1C0011BF4 = *((_BYTE *)Signature + 55);
    byte_1C0011BF5 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  else
  {
    v7 = AcpiTable;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x52u,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      v7);
  }
  return v5;
}
