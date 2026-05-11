/*
 * XREFs of USBHwGetTransportResources @ 0x1C0020530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010C4 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C000A240 (memmove.c)
 */

__int64 __fastcall USBHwGetTransportResources(int a1, __int64 a2, _QWORD *a3, _BYTE *a4, _DWORD *a5)
{
  __int64 v5; // rax
  int v8; // r12d
  unsigned int v10; // edi
  __int64 v11; // r15
  __int64 v12; // rbp
  PKSDEVICE Device; // rax
  __int64 v14; // rdx
  _WORD *v15; // rdx
  int v16; // esi
  int v17; // esi
  int v18; // esi
  size_t v19; // rbx

  v5 = a3[2];
  v8 = a2;
  v10 = 0;
  v11 = *(_QWORD *)(v5 + 152);
  v12 = *(_QWORD *)(v5 + 144);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    9u,
    0xAu,
    (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids);
  Device = KsGetDevice(a3);
  if ( !Device )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      0xBu,
      (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids);
    v10 = -1073741437;
    goto LABEL_29;
  }
  v15 = (_WORD *)*((_QWORD *)Device->Context + 9);
  v16 = a1 - 2;
  if ( !v16 )
  {
    v15 = *(_WORD **)(v12 + 136);
    goto LABEL_25;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v15 = *(_WORD **)(v11 + 80);
    if ( v8 )
      v15 = *(_WORD **)(v11 + 88);
    if ( v15 )
    {
      v19 = *(unsigned int *)v15;
      goto LABEL_11;
    }
LABEL_10:
    *a5 = 0;
    v10 = -1073741437;
    goto LABEL_29;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
    {
      v10 = -1073741811;
      *a5 = 0;
      goto LABEL_29;
    }
    v15 = *(_WORD **)(v12 + 168);
    if ( v8 )
      v15 = *(_WORD **)(v12 + 176);
LABEL_25:
    if ( v15 )
    {
      v19 = *(unsigned __int8 *)v15;
LABEL_11:
      if ( *a5 )
      {
        if ( *a5 < (unsigned int)v19 )
        {
          v10 = -1073741811;
          goto LABEL_29;
        }
        memmove(a4, v15, v19);
      }
      else
      {
        v10 = -1073741789;
      }
      *a5 = v19;
      goto LABEL_29;
    }
    goto LABEL_10;
  }
  if ( *a5 )
  {
    if ( *a5 >= 4u )
    {
      *(_WORD *)a4 = v15[4];
      a4[2] = *(_BYTE *)(v12 + 186);
      a4[3] = *(_BYTE *)(v12 + 187);
      *a5 = 4;
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    *a5 = 4;
    v10 = -1073741789;
  }
LABEL_29:
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v15,
    9u,
    0xCu,
    (__int64)&WPP_c3cce433baea39899fa4d65e1e7a922b_Traceguids,
    v10);
  return v10;
}
