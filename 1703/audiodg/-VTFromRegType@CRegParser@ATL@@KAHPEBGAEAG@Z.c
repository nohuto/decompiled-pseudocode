/*
 * XREFs of ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x1400537A0
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140050D7C (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x14001E3D8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x14001E438 (_Init_thread_header.c)
 */

__int64 __fastcall ATL::CRegParser::VTFromRegType(LPCWSTR lpString1, unsigned __int16 *a2)
{
  int v4; // ebx
  LPCWSTR *i; // rdi
  __int64 result; // rax

  if ( __TSS0__1__VTFromRegType_CRegParser_ATL__KAHPEBGAEAG_Z_4HA > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                              + 4LL) )
  {
    Init_thread_header(&__TSS0__1__VTFromRegType_CRegParser_ATL__KAHPEBGAEAG_Z_4HA);
    if ( __TSS0__1__VTFromRegType_CRegParser_ATL__KAHPEBGAEAG_Z_4HA == -1 )
    {
      `ATL::CRegParser::VTFromRegType'::`2'::map[0] = (__int64)L"S";
      word_140086498 = 8;
      qword_1400864A0 = (__int64)L"M";
      word_1400864A8 = 16392;
      qword_1400864B0 = (__int64)L"D";
      word_1400864B8 = 19;
      qword_1400864C0 = (__int64)L"B";
      word_1400864C8 = 17;
      Init_thread_footer(&__TSS0__1__VTFromRegType_CRegParser_ATL__KAHPEBGAEAG_Z_4HA);
    }
  }
  v4 = 0;
  for ( i = (LPCWSTR *)`ATL::CRegParser::VTFromRegType'::`2'::map; lstrcmpiW(lpString1, *i); i += 2 )
  {
    if ( (unsigned int)++v4 >= 4 )
      return 0LL;
  }
  result = 1LL;
  *a2 = `ATL::CRegParser::VTFromRegType'::`2'::map[2 * v4 + 1];
  return result;
}
