/*
 * XREFs of ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C00604DC
 * Callers:
 *     ?GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C0060054 (-GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     ?GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C0060B94 (-GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 * Callees:
 *     ?compModeCap@@YAHPEAUtagModeCap@@0@Z @ 0x1C0060AB0 (-compModeCap@@YAHPEAUtagModeCap@@0@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall InsertModecapList(struct tagModeCap *a1, struct tagModeCap *a2, unsigned int a3)
{
  __int64 v3; // r11
  __int64 v4; // rdi
  struct tagModeCap *v5; // r10
  int v7; // eax
  __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 result; // rax
  _QWORD *v13; // rbx

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  if ( !a3 )
  {
LABEL_4:
    v9 = 3 * v4;
    *(_OWORD *)((char *)v5 + 8 * v9) = *(_OWORD *)a1;
    *((_QWORD *)v5 + v9 + 2) = *((_QWORD *)a1 + 2);
    return (unsigned int)(v4 + 1);
  }
  while ( 1 )
  {
    v7 = compModeCap(a1, (struct tagModeCap *)((char *)v5 + 24 * v3));
    if ( v7 <= 0 )
      break;
    v3 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v3 >= (unsigned int)v4 )
      goto LABEL_4;
  }
  if ( v7 )
  {
    result = (unsigned int)v4;
    if ( (unsigned int)v4 >= 0x24 )
      return result;
    v13 = (_QWORD *)((char *)v5 + 24 * v8);
    memmove((char *)v5 + 24 * (unsigned int)(v8 + 1), v13, 24LL * (unsigned int)(v4 - v8));
    *(_OWORD *)v13 = *(_OWORD *)a1;
    v13[2] = *((_QWORD *)a1 + 2);
    return (unsigned int)(v4 + 1);
  }
  v10 = *((_DWORD *)a1 + 2);
  if ( *((_DWORD *)v5 + 6 * v8 + 2) < v10 )
  {
    *((_DWORD *)v5 + 6 * v8 + 2) = v10;
    *((_DWORD *)v5 + 6 * v8 + 3) = *((_DWORD *)a1 + 3);
  }
  v11 = *((_DWORD *)a1 + 5);
  if ( *((_DWORD *)v5 + 6 * v8 + 5) < v11 )
  {
    *((_DWORD *)v5 + 6 * v8 + 5) = v11;
    *((_DWORD *)v5 + 6 * v8 + 4) = *((_DWORD *)a1 + 4);
  }
  return (unsigned int)v4;
}
