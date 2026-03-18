/*
 * XREFs of ACPIProcessPhysicalDeviceLocation @ 0x1C008B638
 * Callers:
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0071008 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIEvalPkgDataElement @ 0x1C0043638 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C008B268 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C008B350 (ACPIFreePhysicalDeviceLocationDescriptor.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C008B384 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIInsertPhysicalDeviceLocationDescriptor @ 0x1C008B4F0 (ACPIInsertPhysicalDeviceLocationDescriptor.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008B9B8 (ACPIProcessPhysicalDeviceLocationPackage.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _OWORD *v6; // rdi
  _QWORD *v7; // rbx
  int v8; // ebx
  int v9; // eax
  unsigned int *v10; // r12
  unsigned int v11; // r15d
  int v12; // eax
  _QWORD *i; // rax
  _QWORD v15[5]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v16[5]; // [rsp+80h] [rbp+Fh] BYREF
  PVOID P; // [rsp+D8h] [rbp+67h] BYREF

  P = 0LL;
  v6 = 0LL;
  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v7 = *(_QWORD **)(a1 + 712);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
  }
  if ( a3 )
  {
    memset(a3, 0, 0x38uLL);
    a3[1] = a3;
    *a3 = a3;
    a3[4] = a3 + 3;
    a3[3] = a3 + 3;
    a3[6] = a3 + 5;
    a3[5] = a3 + 5;
  }
  if ( !v7 || !AMLIIsNamedChildPresent(v7, 1145851999) )
  {
    v8 = -1073741823;
    goto LABEL_53;
  }
  v8 = ACPIGet(a1, 0x444C505Fu, 268566528, 0LL, 0, 0LL, 0LL, (__int64)v16, 0LL);
  if ( v8 < 0 )
    goto LABEL_55;
  if ( WORD1(v16[0]) == 3 )
  {
    if ( a2 )
    {
      v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v16, (_DWORD *)a2);
      if ( v8 < 0 )
        goto LABEL_55;
    }
    if ( !a3 )
      goto LABEL_55;
    v8 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &P);
    if ( v8 >= 0 )
    {
      v6 = P;
      if ( a2 )
      {
LABEL_28:
        ACPIInsertPhysicalDeviceLocationDescriptor(a3, (__int64)v6);
        v6 = 0LL;
        goto LABEL_42;
      }
      v9 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v16, (_DWORD *)P + 4);
LABEL_27:
      v8 = v9;
      if ( v9 < 0 )
        goto LABEL_53;
      goto LABEL_28;
    }
LABEL_29:
    v6 = P;
    goto LABEL_53;
  }
  if ( WORD1(v16[0]) != 4 || (v10 = (unsigned int *)v16[4], !*(_DWORD *)v16[4]) )
  {
LABEL_17:
    v8 = -1073741823;
    goto LABEL_55;
  }
  v8 = AMLIEvalPkgDataElement((__int64)v16, 0, v15);
  if ( v8 < 0 )
    goto LABEL_55;
  if ( WORD1(v15[0]) == 3 )
  {
    if ( a2 )
    {
      v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v15, (_DWORD *)a2);
      if ( v8 < 0 )
        goto LABEL_55;
    }
    if ( !a3 )
      goto LABEL_55;
    v8 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &P);
    if ( v8 < 0 )
      goto LABEL_29;
    v6 = P;
    if ( a2 || (v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v15, (_DWORD *)P + 4), v8 >= 0) )
    {
      v9 = ACPIProcessPhysicalDeviceLocationPackage(v16, 0LL, v6);
      goto LABEL_27;
    }
    goto LABEL_53;
  }
  if ( WORD1(v15[0]) != 4 )
    goto LABEL_17;
  if ( !a3 )
  {
    if ( a2 )
      v8 = ACPIProcessPhysicalDeviceLocationPackage(v15, a2, 0LL);
    goto LABEL_55;
  }
  v11 = 0;
  do
  {
    v12 = ACPICreatePhysicalDeviceLocationDescriptor(0LL, &P);
    v6 = P;
    v8 = v12;
    if ( v12 < 0 )
      break;
    v8 = ACPIProcessPhysicalDeviceLocationPackage(v15, (char *)P + 16, P);
    if ( v8 < 0 )
      break;
    if ( !v11 && a2 )
    {
      *(_OWORD *)a2 = v6[1];
      *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 8);
    }
    ACPIInsertPhysicalDeviceLocationDescriptor(a3, (__int64)v6);
    ++v11;
    v6 = 0LL;
    P = 0LL;
    if ( v11 >= *v10 )
      break;
    AMLIFreeDataBuffs((__int64)v15);
    v8 = AMLIEvalPkgDataElement((__int64)v16, v11, v15);
    if ( v8 < 0 )
      break;
  }
  while ( WORD1(v15[0]) == 4 );
  if ( v8 < 0 )
  {
LABEL_53:
    if ( v6 )
      ACPIFreePhysicalDeviceLocationDescriptor((char *)v6);
    goto LABEL_55;
  }
LABEL_42:
  if ( a3[2] || (_QWORD *)a3[5] != a3 + 5 )
    goto LABEL_53;
  for ( i = (_QWORD *)a3[3]; i != a3 + 3; i = (_QWORD *)*i )
  {
    if ( a3[2] )
    {
      a3[2] = 0LL;
      break;
    }
    a3[2] = i - 9;
  }
LABEL_55:
  if ( v15[4] )
    AMLIFreeDataBuffs((__int64)v15);
  if ( v16[4] )
    AMLIFreeDataBuffs((__int64)v16);
  return (unsigned int)v8;
}
