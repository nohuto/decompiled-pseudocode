/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C002D2A4
 * Callers:
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C001B5CC (GetAcpiTable.c)
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
      dword_1C0011B64 = 268439553;
      dword_1C0011B6C = 0;
      dword_1C0011B68 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C0011B70 = 268439553;
      HIDWORD(qword_1C0011B74) = 0;
      LODWORD(qword_1C0011B74) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C0011B7C = 268439553;
      dword_1C0011B84 = 0;
      dword_1C0011B80 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C0011B88 = 268439553;
      HIDWORD(qword_1C0011B8C) = 0;
      LODWORD(qword_1C0011B8C) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C0011B94 = 134219777;
      dword_1C0011B9C = 0;
      dword_1C0011B98 = Signature[18];
    }
    dword_1C0011BA0 = Signature[12];
    byte_1C0011BA6 = *((_BYTE *)Signature + 105);
    byte_1C0011BA7 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C0011B62 = *((_WORD *)Signature + 49);
    byte_1C0011BA4 = *((_BYTE *)Signature + 55);
    byte_1C0011BA5 = *((_BYTE *)Signature + 95);
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
