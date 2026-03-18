/*
 * XREFs of RIMGetPropertyCount @ 0x1C00934B0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C000FC08 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _HIDP_PREPARSED_DATA *a4)
{
  __int64 v4; // r13
  unsigned __int16 v6; // si
  __int64 v7; // rax
  int v8; // r14d
  unsigned __int16 v9; // r15
  int SpecificValueCaps; // ebx
  unsigned __int16 v11; // ax
  struct _HIDP_VALUE_CAPS *v12; // rdi
  UCHAR *p_ReportID; // rax
  __int64 v14; // rdx
  __int64 v16; // rax
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v19; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v20[2]; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int16 v21; // [rsp+54h] [rbp-65h] BYREF
  unsigned __int16 v22; // [rsp+58h] [rbp-61h]
  int v23; // [rsp+5Ch] [rbp-5Dh]
  __int64 v24; // [rsp+60h] [rbp-59h]
  struct _HIDP_VALUE_CAPS v25; // [rsp+70h] [rbp-49h] BYREF

  v4 = a1;
  v24 = a1;
  v22 = a2;
  v19 = a3;
  v6 = a3;
  v18 = a3;
  v7 = *(_QWORD *)(a1 + 672);
  v8 = 0;
  v20[0] = 0;
  v21 = 1;
  v9 = a2;
  v23 = 0;
  SpecificValueCaps = -1073741668;
  if ( v7 )
  {
    v11 = *(_WORD *)(v7 + 8);
    if ( v11 )
    {
      v9 = v11;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v11, 0, 0LL, v20, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v16 = *(_QWORD *)(v4 + 672);
        v6 = v20[0] + v19;
        v18 = v20[0];
        v23 = 1;
        *(_WORD *)(v16 + 10) = v20[0];
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x1Au,
          (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
      }
    }
  }
  if ( v6 > 1u )
  {
    v12 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * v6, 0x63707352u);
    if ( v12 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v9, 0x30u, &v25, &v21, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v4 + 736) = v25.ReportID;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v9, 0, v12, &v18, a4);
        if ( SpecificValueCaps >= 0 )
        {
          if ( v18 )
          {
            p_ReportID = &v12->ReportID;
            v14 = v18;
            do
            {
              if ( *p_ReportID == v25.ReportID )
                ++v8;
              p_ReportID += 72;
              --v14;
            }
            while ( v14 );
          }
          if ( v23 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v22, 0, &v12[v18], &v19, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v17 = v18;
              if ( v19 )
              {
                do
                {
                  if ( v17 >= v6 )
                    break;
                  if ( v12[v17].ReportID == v25.ReportID )
                    ++v8;
                  ++v17;
                }
                while ( (unsigned __int16)(v17 - v18) < v19 );
                v4 = v24;
              }
            }
          }
          *(_DWORD *)(v4 + 296) = v8;
        }
      }
      Win32FreePool((__int64)v12);
    }
  }
  return SpecificValueCaps >= 0;
}
