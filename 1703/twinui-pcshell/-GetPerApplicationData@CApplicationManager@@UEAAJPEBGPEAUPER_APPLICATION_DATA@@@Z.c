/*
 * XREFs of ?GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18000D740
 * Callers:
 *     <none>
 * Callees:
 *     ??4PER_APPLICATION_DATA@@QEAAAEAU0@AEBU0@@Z @ 0x18001744C (--4PER_APPLICATION_DATA@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180017684 (-s_LookupEntry@-$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare.c)
 */

__int64 __fastcall CApplicationManager::GetPerApplicationData(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct PER_APPLICATION_DATA *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  const unsigned __int16 *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v5 = *((_QWORD *)this + 77);
  v6 = v5 == 0 ? 0x8002802B : 0;
  if ( v5 )
  {
    v7 = (_DWORD *)CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                     v5,
                     *((unsigned int *)this + 151),
                     &v9);
    v6 = *v7 != 1 ? 0x8002802B : 0;
    if ( *v7 == 1 )
      PER_APPLICATION_DATA::operator=(a3, v7 + 4);
  }
  return v6;
}
