/*
 * XREFs of ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00821EC
 * Callers:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C001492C (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0014A94 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::ReleaseSystemResource(
        DirectComposition::CApplicationChannel *a1,
        int a2)
{
  unsigned __int64 v3; // rcx
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 result; // rax

  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)a1 + 19) )
    v4 = *(struct DirectComposition::CResourceMarshaler **)(v3 * *((_QWORD *)a1 + 20) + *((_QWORD *)a1 + 16));
  else
    v4 = 0LL;
  result = DirectComposition::CApplicationChannel::ReleaseResource(a1, v4);
  if ( !(_DWORD)result )
    return DirectComposition::CApplicationChannel::Commit(a1, 0LL, 0, 0LL);
  return result;
}
