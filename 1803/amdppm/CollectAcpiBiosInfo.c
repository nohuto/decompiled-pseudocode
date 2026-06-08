/*
 * XREFs of CollectAcpiBiosInfo @ 0x1C00312CC
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003140C (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1C00268CC (GetAcpiTable.c)
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
      dword_1C0011BC4 = 268439553;
      dword_1C0011BCC = 0;
      dword_1C0011BC8 = Signature[14];
    }
    if ( Signature[15] )
    {
      dword_1C0011BD0 = 268439553;
      HIDWORD(qword_1C0011BD4) = 0;
      LODWORD(qword_1C0011BD4) = Signature[15];
    }
    if ( Signature[16] )
    {
      dword_1C0011BDC = 268439553;
      dword_1C0011BE4 = 0;
      dword_1C0011BE0 = Signature[16];
    }
    if ( Signature[17] )
    {
      dword_1C0011BE8 = 268439553;
      HIDWORD(qword_1C0011BEC) = 0;
      LODWORD(qword_1C0011BEC) = Signature[17];
    }
    if ( Signature[18] )
    {
      dword_1C0011BF4 = 134219777;
      dword_1C0011BFC = 0;
      dword_1C0011BF8 = Signature[18];
    }
    dword_1C0011C00 = Signature[12];
    byte_1C0011C06 = *((_BYTE *)Signature + 105);
    byte_1C0011C07 = *((_BYTE *)Signature + 104);
    AcpiInfo = *((_WORD *)Signature + 48);
    word_1C0011BC2 = *((_WORD *)Signature + 49);
    byte_1C0011C04 = *((_BYTE *)Signature + 55);
    byte_1C0011C05 = *((_BYTE *)Signature + 95);
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
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      v7);
  }
  return v5;
}
