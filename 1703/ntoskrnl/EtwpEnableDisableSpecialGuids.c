/*
 * XREFs of EtwpEnableDisableSpecialGuids @ 0x140553FF8
 * Callers:
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 * Callees:
 *     WmiTraceRundownNotify @ 0x14043C010 (WmiTraceRundownNotify.c)
 *     EtwpCheckGuidAccess @ 0x140554B20 (EtwpCheckGuidAccess.c)
 *     EtwpEnableDisableUMGL @ 0x140709BD0 (EtwpEnableDisableUMGL.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14070FEBC (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14070FFFC (EtwpCheckLoggerAccessAndDoRundown.c)
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
  __int64 v9; // r9
  int v13; // r10d
  __int64 v14; // rdx
  char v15; // bl
  char v16; // r11
  unsigned int v17; // r8d
  GUID **v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // r11
  unsigned int v24; // ebx

  v9 = 1LL;
  v13 = -1073741275;
  *a8 = 1;
  v14 = 2LL;
  if ( a4 != 2 )
  {
    v15 = 0;
    if ( a4 == 1 )
    {
      v16 = 1;
      goto LABEL_4;
    }
    if ( !a4 )
    {
      v16 = 0;
LABEL_4:
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
          LOBYTE(v9) = a5;
          LOBYTE(v14) = v16;
          return EtwpEnableDisableUMGL(a1, v14, a3, v9, *((unsigned __int8 *)&(&EtwpUmglProviders)[2 * v17] + 8));
        }
        ++v17;
        v18 += 2;
      }
      while ( v17 < 0xA );
      if ( a1 == EtwpHostSiloState )
      {
        v21 = *(_QWORD *)&KernelRundownGuid.Data1 - v19;
        if ( *(_QWORD *)&KernelRundownGuid.Data1 == v19 )
          v21 = *(_QWORD *)KernelRundownGuid.Data4 - a2[1];
        if ( v21 )
        {
          *a8 = 0;
          return (unsigned int)v13;
        }
        if ( v16 != 1 )
          return 0;
        if ( a5 != 1 )
        {
          switch ( a5 )
          {
            case 2:
              v14 = (unsigned __int8)EtwpSystemLogger[0];
              break;
            case 4:
LABEL_40:
              v15 = 1;
              break;
            case 16:
              v13 = EtwpCheckGuidAccess(&FileProvGuid, 128LL, 0LL);
              if ( v13 >= 0 )
              {
                v13 = WmiTraceRundownNotify(a3);
                if ( v13 >= 0 )
                  return 0;
              }
              return (unsigned int)v13;
            default:
              break;
          }
          LOBYTE(v9) = v15;
          return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, v14, a3, v9);
        }
        v14 = (unsigned __int8)EtwpSystemLogger[0];
        goto LABEL_40;
      }
      result = 3221225506LL;
      goto LABEL_21;
    }
LABEL_20:
    result = 3221226021LL;
LABEL_21:
    *a8 = 0;
    return result;
  }
  v23 = *(_QWORD *)&SystemTraceControlGuid.Data1 - *a2;
  if ( *(_QWORD *)&SystemTraceControlGuid.Data1 == *a2 )
    v23 = *(_QWORD *)SystemTraceControlGuid.Data4 - a2[1];
  v24 = 0;
  if ( v23 || a1 != EtwpHostSiloState )
    goto LABEL_20;
  if ( a5 == 1 )
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, 2, a3, v9, a6, a7);
  if ( a5 == 2 )
  {
    LOBYTE(v9) = 0;
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, 2, a3, v9, a6, a7);
  }
  return v24;
}
