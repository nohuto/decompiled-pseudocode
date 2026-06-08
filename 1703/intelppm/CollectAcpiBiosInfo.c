/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C003116C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0031254 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C001AAAC (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(_DWORD *a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  _DWORD *Signature; // [rsp+40h] [rbp+8h] BYREF

  Signature = a1;
  AcpiTable = (unsigned int)GetAcpiTable((ULONG)a1, (ULONG)&Signature, a3, a4);
  if ( AcpiTable < 0 )
  {
    v6 = AcpiTable;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x52u,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      v6);
  }
  else
  {
    if ( Signature[14] )
    {
      dword_1C0016524 = 268439553;
      dword_1C001652C = 0;
      dword_1C0016528 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C0016530 = 268439553;
      HIDWORD(qword_1C0016534) = 0;
      LODWORD(qword_1C0016534) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C001653C = 268439553;
      dword_1C0016544 = 0;
      dword_1C0016540 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C0016548 = 268439553;
      HIDWORD(qword_1C001654C) = 0;
      LODWORD(qword_1C001654C) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C0016554 = 134219777;
      dword_1C001655C = 0;
      dword_1C0016558 = Signature[18];
    }
    dword_1C0016560 = Signature[12];
    byte_1C0016566 = *((_BYTE *)Signature + 105);
    byte_1C0016567 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C0016522 = *((_WORD *)Signature + 49);
    byte_1C0016564 = *((_BYTE *)Signature + 55);
    byte_1C0016565 = *((_BYTE *)Signature + 95);
    ExFreePoolWithTag(Signature, 0);
  }
  return (unsigned int)AcpiTable;
}
