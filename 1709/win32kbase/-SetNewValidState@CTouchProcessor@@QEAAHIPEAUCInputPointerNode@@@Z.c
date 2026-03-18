/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0125BA4
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011AAF8 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C011BA34 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C0127FAC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1C0129004 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01291A0 (WPP_RECORDER_SF_LL.c)
 */

__int64 __fastcall CTouchProcessor::SetNewValidState(
        CTouchProcessor *this,
        unsigned int a2,
        struct CInputPointerNode *a3)
{
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // ebx
  int v10; // ecx
  bool v11; // zf
  char *v12; // rax
  __int64 v13; // rcx
  char **v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x34u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v6 = 1;
  v7 = 3;
  if ( (a2 & 0x70006) == 0x10006 )
  {
    v10 = 2;
    goto LABEL_22;
  }
  if ( (a2 & 0x70006) != 0x20000 )
  {
    if ( (a2 & 0x70006) != 0x20002 )
    {
      if ( (a2 & 0x70006) == 0x20006 )
      {
        v10 = 2;
        v11 = *((_DWORD *)a3 + 9) == 2;
      }
      else
      {
        if ( (a2 & 0x70006) == 0x40000 )
        {
          v10 = 3;
        }
        else
        {
          if ( (a2 & 0x70006) != 0x40002 )
          {
            WPP_RECORDER_SF_L(*((_QWORD *)this + 1), 1, 3, 53);
            v8 = 0;
LABEL_10:
            LOBYTE(v6) = 2;
            WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v6, v7, 54, v15, a2, *((_DWORD *)a3 + 9));
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
  if ( (a2 & 4) != 0 )
    v8 = (a2 & 0x1F0) != 0;
  if ( !v8 )
    goto LABEL_10;
  if ( (*((_DWORD *)a3 + 86) & 8) != 0 )
    v8 = (a2 >> 15) & 1;
  if ( !v8 )
    goto LABEL_10;
  *((_DWORD *)a3 + 9) = v10;
  if ( v10 == 3 )
  {
    v12 = (char *)a3 + 16;
    if ( *(char **)v12 != v12 )
    {
      v13 = *(_QWORD *)v12;
      if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || (v14 = (char **)*((_QWORD *)a3 + 3), *v14 != v12) )
        __fastfail(3u);
      *v14 = (char *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      *((_QWORD *)a3 + 3) = (char *)a3 + 16;
      *(_QWORD *)v12 = v12;
    }
  }
  *((_DWORD *)a3 + 86) = *((_DWORD *)a3 + 86) & 0xFFFFFFF3 | ((a2 & 0x2000 | (a2 >> 1) & 0x4000) >> 11);
LABEL_11:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x37u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  return v8;
}
