/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01265C4
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C00A1008 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C011CBD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C012876C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1C01297AC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0129854 (WPP_RECORDER_SF_LL.c)
 */

__int64 __fastcall CTouchProcessor::SetNewValidState(
        CTouchProcessor *this,
        unsigned int a2,
        struct CInputPointerNode *a3)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  int v7; // r8d
  unsigned int v8; // ebx
  int v10; // ecx
  bool v11; // zf
  char *v12; // rax
  char **v13; // rcx
  int v14; // [rsp+20h] [rbp-38h]

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      52,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  LODWORD(v6) = 1;
  v7 = 3;
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v10 = 2;
    goto LABEL_22;
  }
  if ( (v4 & 0x70006) != 0x20000 )
  {
    if ( (v4 & 0x70006) != 0x20002 )
    {
      if ( (v4 & 0x70006) == 0x20006 )
      {
        v10 = 2;
        v11 = *((_DWORD *)a3 + 9) == 2;
      }
      else
      {
        if ( (v4 & 0x70006) == 0x40000 )
        {
          v10 = 3;
        }
        else
        {
          if ( (v4 & 0x70006) != 0x40002 )
          {
            WPP_RECORDER_SF_L(*((_QWORD *)this + 1), 1, 3, 53);
            v8 = 0;
LABEL_10:
            LOBYTE(v6) = 2;
            WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v6, v7, 54, v14, v4, *((_DWORD *)a3 + 9));
            goto LABEL_11;
          }
          v10 = 1;
        }
        v11 = *((_DWORD *)a3 + 9) == 2;
      }
      goto LABEL_18;
    }
    v10 = 1;
LABEL_22:
    v8 = *((_DWORD *)a3 + 9) <= 1u;
    goto LABEL_23;
  }
  v11 = *((_DWORD *)a3 + 9) == 1;
  v10 = 3;
LABEL_18:
  v8 = v11;
LABEL_23:
  if ( !v8 )
    goto LABEL_10;
  if ( (v4 & 4) != 0 )
    v8 = (v4 & 0x1F0) != 0;
  if ( !v8 )
    goto LABEL_10;
  if ( (*((_DWORD *)a3 + 86) & 8) != 0 )
    v8 = (v4 >> 15) & 1;
  if ( !v8 )
    goto LABEL_10;
  *((_DWORD *)a3 + 9) = v10;
  if ( v10 == 3 )
  {
    v12 = (char *)a3 + 16;
    if ( *(char **)v12 != v12 )
    {
      v6 = *(_QWORD *)v12;
      v13 = (char **)*((_QWORD *)a3 + 3);
      if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || *v13 != v12 )
        __fastfail(3u);
      *v13 = (char *)v6;
      *(_QWORD *)(v6 + 8) = v13;
      *((_QWORD *)a3 + 3) = (char *)a3 + 16;
      *(_QWORD *)v12 = v12;
    }
  }
  *((_DWORD *)a3 + 86) = *((_DWORD *)a3 + 86) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
LABEL_11:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      11,
      55,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  return v8;
}
