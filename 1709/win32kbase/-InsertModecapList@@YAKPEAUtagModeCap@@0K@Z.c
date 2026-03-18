/*
 * XREFs of ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C00790E4
 * Callers:
 *     ?GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C0078C60 (-GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     ?GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C0079874 (-GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 * Callees:
 *     ?compModeCap@@YAHPEAUtagModeCap@@0@Z @ 0x1C00796D0 (-compModeCap@@YAHPEAUtagModeCap@@0@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall InsertModecapList(struct tagModeCap *a1, struct tagModeCap *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v7; // r14
  int v8; // eax
  const void *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax

  v3 = 0LL;
  v4 = a3;
  if ( !a3 )
  {
LABEL_4:
    v11 = 3 * v4;
    *(_OWORD *)((char *)a2 + 8 * v11) = *(_OWORD *)a1;
    *((_QWORD *)a2 + v11 + 2) = *((_QWORD *)a1 + 2);
    return (unsigned int)(v4 + 1);
  }
  while ( 1 )
  {
    v7 = (unsigned int)v3;
    v8 = compModeCap(a1, (struct tagModeCap *)((char *)a2 + 24 * v3));
    if ( v8 <= 0 )
      break;
    v3 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v3 >= (unsigned int)v4 )
      goto LABEL_4;
  }
  if ( v8 )
  {
    result = (unsigned int)v4;
    if ( (unsigned int)v4 >= 0x24 )
      return result;
    memmove((char *)a2 + 24 * (unsigned int)(v10 + 1), v9, 24LL * (unsigned int)(v4 - v10));
    v15 = 3 * v7;
    *(_OWORD *)((char *)a2 + 8 * v15) = *(_OWORD *)a1;
    *((_QWORD *)a2 + v15 + 2) = *((_QWORD *)a1 + 2);
    return (unsigned int)(v4 + 1);
  }
  v12 = *((_DWORD *)a1 + 2);
  if ( *((_DWORD *)a2 + 6 * v10 + 2) < v12 )
  {
    *((_DWORD *)a2 + 6 * v10 + 2) = v12;
    *((_DWORD *)a2 + 6 * v10 + 3) = *((_DWORD *)a1 + 3);
  }
  v13 = *((_DWORD *)a1 + 5);
  if ( *((_DWORD *)a2 + 6 * v10 + 5) < v13 )
  {
    *((_DWORD *)a2 + 6 * v10 + 5) = v13;
    *((_DWORD *)a2 + 6 * v10 + 4) = *((_DWORD *)a1 + 4);
  }
  return (unsigned int)v4;
}
