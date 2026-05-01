/*
 * XREFs of ??4PER_APPLICATION_DATA@@QEAAAEAU0@AEBU0@@Z @ 0x18001744C
 * Callers:
 *     ?GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18000D740 (-GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall PER_APPLICATION_DATA::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rcx

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  a1[1] = a2[1];
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  *((_BYTE *)a1 + 17) = *((_BYTE *)a2 + 17);
  *((_BYTE *)a1 + 18) = *((_BYTE *)a2 + 18);
  *((_BYTE *)a1 + 19) = *((_BYTE *)a2 + 19);
  *((_BYTE *)a1 + 20) = *((_BYTE *)a2 + 20);
  *((_BYTE *)a1 + 21) = *((_BYTE *)a2 + 21);
  *((_BYTE *)a1 + 22) = *((_BYTE *)a2 + 22);
  *((_BYTE *)a1 + 23) = *((_BYTE *)a2 + 23);
  *((_BYTE *)a1 + 24) = *((_BYTE *)a2 + 24);
  *((_BYTE *)a1 + 25) = *((_BYTE *)a2 + 25);
  *((_BYTE *)a1 + 26) = *((_BYTE *)a2 + 26);
  *((_BYTE *)a1 + 27) = *((_BYTE *)a2 + 27);
  *((_BYTE *)a1 + 28) = *((_BYTE *)a2 + 28);
  return a1;
}
