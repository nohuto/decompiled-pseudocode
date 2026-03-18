/*
 * XREFs of ACPIInsertPhysicalDeviceLocationDescriptor @ 0x1C008B4F0
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInsertPhysicalDeviceLocationDescriptor(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx

  v2 = (_QWORD *)a1[1];
  if ( (_QWORD *)*v2 != a1 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1;
  *(_QWORD *)(a2 + 8) = v2;
  *v2 = a2;
  a1[1] = a2;
  if ( *(_QWORD *)(a2 + 104) != *(_QWORD *)&GUID_NULL.Data1
    || (result = *(_QWORD **)(a2 + 112), result != *(_QWORD **)GUID_NULL.Data4) )
  {
    result = (_QWORD *)a1[6];
    v4 = a1 + 5;
    v5 = (_QWORD *)(a2 + 88);
    if ( (_QWORD *)*result != v4 )
      __fastfail(3u);
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(a2 + 28) & 0x40000) != 0 )
  {
    result = (_QWORD *)a1[4];
    v4 = a1 + 3;
    v5 = (_QWORD *)(a2 + 72);
    if ( (_QWORD *)*result != v4 )
      __fastfail(3u);
LABEL_12:
    *v5 = v4;
    v5[1] = result;
    *result = v5;
    v4[1] = v5;
    return result;
  }
  if ( !a1[2] )
    a1[2] = a2;
  return result;
}
