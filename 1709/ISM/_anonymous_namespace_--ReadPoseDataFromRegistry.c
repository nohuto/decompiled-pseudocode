/*
 * XREFs of _anonymous_namespace_::ReadPoseDataFromRegistry @ 0x180074430
 * Callers:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 * Callees:
 *     _anonymous_namespace_::ReadRegistryFloat @ 0x1800742A8 (_anonymous_namespace_--ReadRegistryFloat.c)
 */

__int64 __fastcall anonymous_namespace_::ReadPoseDataFromRegistry(HKEY a1, __int64 a2)
{
  char v4; // si
  bool v5; // al
  __int64 result; // rax

  v4 = 1;
  v5 = (int)anonymous_namespace_::ReadRegistryFloat(a1, L"Translation_X", (float *)a2) >= 0
    && (int)anonymous_namespace_::ReadRegistryFloat(a1, L"Translation_Y", (float *)(a2 + 4)) >= 0
    && (int)anonymous_namespace_::ReadRegistryFloat(a1, L"Translation_Z", (float *)(a2 + 8)) >= 0;
  *(_BYTE *)(a2 + 28) = v5;
  result = anonymous_namespace_::ReadRegistryFloat(a1, L"Orientation_X", (float *)(a2 + 12));
  if ( (int)result < 0
    || (result = anonymous_namespace_::ReadRegistryFloat(a1, L"Orientation_Y", (float *)(a2 + 16)), (int)result < 0)
    || (result = anonymous_namespace_::ReadRegistryFloat(a1, L"Orientation_Z", (float *)(a2 + 20)), (int)result < 0)
    || (result = anonymous_namespace_::ReadRegistryFloat(a1, L"Orientation_W", (float *)(a2 + 24)), (int)result < 0) )
  {
    v4 = 0;
  }
  *(_BYTE *)(a2 + 29) = v4;
  return result;
}
