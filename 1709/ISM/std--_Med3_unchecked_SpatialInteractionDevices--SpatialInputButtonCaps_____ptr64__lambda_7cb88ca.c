/*
 * XREFs of std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007BBD4
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007B09C (std--_Partition_by_median_guess_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 *a3)
{
  __int64 v4; // xmm0_8
  __int64 v5; // xmm1_8
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // xmm1_8
  int v9; // ecx

  if ( *a2 < *a1 || *a2 == *a1 && a2[2] < a1[2] )
  {
    v4 = *(_QWORD *)a1;
    v5 = *(_QWORD *)a2;
    v6 = *((_DWORD *)a2 + 2);
    *(_QWORD *)a2 = v4;
    *((_DWORD *)a2 + 2) = *((_DWORD *)a1 + 2);
    *(_QWORD *)a1 = v5;
    *((_DWORD *)a1 + 2) = v6;
  }
  result = *a2;
  if ( *(_WORD *)a3 < (unsigned __int16)result
    || *(_WORD *)a3 == (_WORD)result && (result = a2[2], *((_WORD *)a3 + 2) < (unsigned __int16)result) )
  {
    v8 = *a3;
    v9 = *((_DWORD *)a3 + 2);
    *a3 = *(_QWORD *)a2;
    *((_DWORD *)a3 + 2) = *((_DWORD *)a2 + 2);
    *(_QWORD *)a2 = v8;
    *((_DWORD *)a2 + 2) = v9;
    result = *a1;
    if ( *a2 < (unsigned __int16)result || *a2 == (_WORD)result && (result = a1[2], a2[2] < (unsigned __int16)result) )
    {
      *(_QWORD *)a2 = *(_QWORD *)a1;
      result = *((unsigned int *)a1 + 2);
      *((_DWORD *)a2 + 2) = result;
      *(_QWORD *)a1 = v8;
      *((_DWORD *)a1 + 2) = v9;
    }
  }
  return result;
}
