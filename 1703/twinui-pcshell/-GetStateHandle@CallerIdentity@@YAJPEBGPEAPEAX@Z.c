/*
 * XREFs of ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x180176578
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18017675C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CallerIdentity::GetStateHandle(CallerIdentity *this, unsigned __int16 *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  signed int LastError; // eax
  signed int v7; // ecx

  v4 = OpenStateExplicit(-6LL, this, a3);
  *(_QWORD *)a2 = v4;
  v5 = 0;
  if ( !v4 )
  {
    LastError = GetLastError();
    v7 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v7 = LastError;
    if ( v7 >= 0 )
      return (unsigned int)-2147467259;
    return (unsigned int)v7;
  }
  return v5;
}
