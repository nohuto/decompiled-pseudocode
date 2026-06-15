/*
 * XREFs of ?OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180089430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x180088F20 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18009C794 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall AudioEffectsWatcher::OnPropertyValueChanged(
        AudioEffectsWatcher *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  __int128 v3; // xmm0
  const struct _tagpropertykey *v7; // rdx
  LONG lVal; // ebx
  void *v9; // rcx
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+58h] [rbp-20h] BYREF

  v3 = *(_OWORD *)((char *)this + 8);
  memset(&pvar, 0, sizeof(pvar));
  v12 = v3;
  v13 = v3;
  EtwEventActivityIdControl(4LL, &v13);
  if ( CompareStringOrdinal(a2, -1, *((LPCWCH *)this + 3), -1, 1) == 2 )
  {
    lVal = 0;
    if ( (unsigned int)operator==((__int64)a3, (__int64)&PKEY_AudioEndpoint_Disable_SysFx) )
    {
      if ( CPolicyConfig::GetPropertyStoreProperty(*((const unsigned __int16 **)this + 3), 1, v7, &pvar) >= 0
        && pvar.vt == 19 )
      {
        lVal = pvar.lVal;
      }
      if ( lVal != *((_DWORD *)this + 17) )
      {
        v9 = (void *)*((_QWORD *)this + 25);
        *((_DWORD *)this + 17) = lVal;
        SetEvent(v9);
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  EtwEventActivityIdControl(4LL, &v13);
  return 0LL;
}
