/*
 * XREFs of RtlpLocateActivationContextSectionForQuery @ 0x18007CF80
 * Callers:
 *     RtlpQueryRunLevel @ 0x18007CB78 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007CC64 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007CEC0 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DEE94 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DF11C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800DF39C (RtlpQueryInformationActivationContextManifestResourceName.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180034D20 (RtlpLocateActivationContextSection.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall RtlpLocateActivationContextSectionForQuery(
        _DWORD *a1,
        int *a2,
        void *a3,
        size_t a4,
        size_t *a5,
        size_t Size,
        _DWORD *a7,
        __int64 a8,
        unsigned int a9,
        _QWORD *a10,
        _DWORD *a11)
{
  int v12; // ebx
  int ActivationContextSection; // eax

  v12 = 0;
  if ( a7
    && (ActivationContextSection = RtlpLocateActivationContextSection(a7, 0LL, a9, a10, a11),
        *a2 = ActivationContextSection,
        ActivationContextSection != -1072365567) )
  {
    LOBYTE(v12) = ActivationContextSection < 0;
    *a1 = v12 + 1;
  }
  else
  {
    *a1 = 2;
    if ( Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      memset(a3, 0, Size);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
}
