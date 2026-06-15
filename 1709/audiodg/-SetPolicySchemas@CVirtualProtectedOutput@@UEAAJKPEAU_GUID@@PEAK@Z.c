/*
 * XREFs of ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x1400412B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicySchemas(
        CVirtualProtectedOutput *this,
        unsigned int a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  int v4; // r10d
  int v5; // ebx
  __int64 v6; // r11
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  struct _GUID v13; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( (unsigned int)v6 >= a2 )
      break;
    v8 = a4[v6];
    v13 = a3[(unsigned int)v6];
    v9 = *(_QWORD *)&MFPROTECTION_DISABLE.Data1 - *(_QWORD *)&v13.Data1;
    if ( *(_QWORD *)&MFPROTECTION_DISABLE.Data1 == *(_QWORD *)&v13.Data1 )
      v9 = *(_QWORD *)MFPROTECTION_DISABLE.Data4 - *(_QWORD *)v13.Data4;
    if ( v9 )
    {
      v10 = *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 - *(_QWORD *)&v13.Data1;
      if ( *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 == *(_QWORD *)&v13.Data1 )
        v10 = *(_QWORD *)MFPROTECTION_CONSTRICTAUDIO.Data4 - *(_QWORD *)v13.Data4;
      if ( v10 )
      {
        v5 = -2147467263;
      }
      else
      {
        if ( v8 >= 0x100 )
        {
LABEL_27:
          v5 = -2147024809;
          goto LABEL_21;
        }
        v11 = (unsigned __int8)v8;
        if ( v4 > (unsigned __int8)v8 )
          v11 = v4;
        v4 = v11;
      }
    }
    else
    {
      if ( v8 >= 2 )
        goto LABEL_27;
      if ( (v8 & 1) != 0 && v4 <= 4 )
        v4 = 4;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( v5 >= 0 );
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CVirtualProtectedOutput *, _QWORD, struct _GUID *, unsigned int *))(*(_QWORD *)this + 40LL))(
           this,
           (unsigned int)v4,
           a3,
           a4);
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
LABEL_21:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_e09cbeeacf3d335096edd029b90af36d_Traceguids, v5);
  }
  AudDGTraceLoggingErrorHelper("CVirtualProtectedOutput::SetPolicySchemas", 0x14Du, v5);
  return (unsigned int)v5;
}
