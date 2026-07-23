/*
 * XREFs of EtwpEnableDisableSpecialGuids @ 0x1404EEB84
 * Callers:
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1404EF040 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1407429E8 (WmiTraceRundownNotify.c)
 *     EtwpEnableDisableUMGL @ 0x140743D7C (EtwpEnableDisableUMGL.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14074CB5C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14074CCA4 (EtwpCheckLoggerAccessAndDoRundown.c)
 */

__int64 __fastcall EtwpEnableDisableSpecialGuids(
        __int64 a1,
        __int64 *a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        _BYTE *a8)
{
  char v8; // r11
  int v11; // r9d
  int v13; // r10d
  __int64 v14; // rdx
  char v15; // bl
  char v16; // bp
  unsigned int v17; // esi
  GUID **v18; // r15
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v23; // r8
  unsigned int v24; // ebx
  __int64 v25; // r9
  GUID **v26; // rdx

  v8 = 1;
  v11 = a5;
  v13 = -1073741275;
  v14 = 2LL;
  *a8 = 1;
  if ( a4 == 2 )
  {
    v23 = *(_QWORD *)&SystemTraceControlGuid.Data1 - *a2;
    if ( *(_QWORD *)&SystemTraceControlGuid.Data1 == *a2 )
      v23 = *(_QWORD *)SystemTraceControlGuid.Data4 - a2[1];
    v24 = 0;
    if ( v23 || a1 != EtwpHostSiloState )
    {
LABEL_12:
      *a8 = 0;
      return (unsigned int)v13;
    }
    if ( a5 != 1 )
    {
      if ( a5 != 2 )
        return v24;
      v8 = 0;
    }
    LOBYTE(v11) = v8;
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, 2, a3, v11, a6, a7);
  }
  v15 = 0;
  if ( a4 == 1 )
  {
    v16 = 1;
  }
  else
  {
    if ( a4 )
      goto LABEL_12;
    v16 = 0;
  }
  v17 = 0;
  v18 = &EtwpUmglProviders;
  do
  {
    v19 = *a2;
    v20 = *(_QWORD *)&(*v18)->Data1 - *a2;
    if ( !v20 )
      v20 = *(_QWORD *)(*v18)->Data4 - a2[1];
    if ( !v20 )
    {
      v26 = &EtwpUmglProviders;
      LOBYTE(v26) = v16;
      return EtwpEnableDisableUMGL(a1, (_DWORD)v26, a3, a5, *((unsigned __int8 *)&(&EtwpUmglProviders)[2 * v17] + 8));
    }
    ++v17;
    v18 += 2;
  }
  while ( v17 < 0xA );
  v21 = *(_QWORD *)&KernelRundownGuid.Data1 - v19;
  if ( *(_QWORD *)&KernelRundownGuid.Data1 == v19 )
    v21 = *(_QWORD *)KernelRundownGuid.Data4 - a2[1];
  if ( v21 )
    goto LABEL_12;
  if ( v16 != 1 )
    return 0;
  v25 = (unsigned int)(a5 - 1);
  if ( a5 == 1 )
  {
    v14 = *(unsigned __int8 *)(a1 + 4156);
    goto LABEL_38;
  }
  v25 = (unsigned int)(a5 - 2);
  if ( a5 == 2 )
  {
    v14 = *(unsigned __int8 *)(a1 + 4156);
    goto LABEL_39;
  }
  v25 = (unsigned int)(a5 - 4);
  if ( a5 == 4 )
  {
LABEL_38:
    v15 = 1;
    goto LABEL_39;
  }
  v25 = (unsigned int)(a5 - 8);
  if ( a5 != 16 )
  {
LABEL_39:
    LOBYTE(v25) = v15;
    return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, v14, a3, v25);
  }
  if ( a1 == EtwpHostSiloState )
  {
    v13 = EtwpCheckGuidAccess(&FileProvGuid, 128LL, 0LL);
    if ( v13 >= 0 )
    {
      v13 = WmiTraceRundownNotify(a3);
      if ( v13 >= 0 )
        return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v13;
}
