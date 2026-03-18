/*
 * XREFs of MxPageAlwaysHot @ 0x14089B008
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x14089A66C (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     <none>
 */

bool __fastcall MxPageAlwaysHot(unsigned __int64 a1)
{
  bool result; // al
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  result = 0;
  if ( qword_1403CB6B8 )
  {
    v2 = 0;
    if ( a1 >= *(_QWORD *)(qword_1403CB6B8 + 16) )
    {
      v3 = 1;
      do
      {
        ++v3;
        ++v2;
      }
      while ( a1 >= *(_QWORD *)(qword_1403CB6B8 + 16LL * v3) );
    }
    return *(_BYTE *)(qword_1403CB6B8 + 16LL * v2 + 14) != 1;
  }
  return result;
}
