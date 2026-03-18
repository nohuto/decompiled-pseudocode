/*
 * XREFs of ?SetBufferProperty@CDataSourceReaderMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C015B270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDataSourceReaderMarshaler::SetBufferProperty(
        DirectComposition::CDataSourceReaderMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx

  *a6 = 0;
  if ( a3 )
  {
    v6 = -1073741811;
    if ( a3 == 1 )
    {
      v6 = a5 != 8 ? 0xC000000D : 0;
      if ( a5 == 8 && *((_QWORD *)this + 6) != *a4 )
      {
        *((_QWORD *)this + 6) = *a4;
LABEL_9:
        *((_DWORD *)this + 4) |= 0x20u;
        *a6 = 1;
      }
    }
  }
  else
  {
    v6 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 == 8 && *((_QWORD *)this + 5) != *a4 )
    {
      *((_QWORD *)this + 5) = *a4;
      goto LABEL_9;
    }
  }
  return v6;
}
