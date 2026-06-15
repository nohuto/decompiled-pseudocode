/*
 * XREFs of ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001D6F8
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014770 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180015AC0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x180011108 (-AddHead@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ConvertDbToEngineVolume @ 0x18001EA18 (ConvertDbToEngineVolume.c)
 */

__int64 __fastcall TsSessionIdScreenReaderStateChanged(DWORD a1, int a2, int a3, float a4, int *a5)
{
  float v5; // xmm8_4
  int v9; // edi
  unsigned int v10; // esi
  int *v11; // r15
  int v12; // eax
  struct TSSession *v13; // rbx
  float v14; // xmm7_4
  __int64 **v15; // r9
  __int64 *i; // r8
  double v17; // xmm0_8
  __int64 *v18; // rax
  __int64 *v19; // rax
  bool v20; // zf
  __int64 result; // rax
  ATL::CAtlException *v22; // rbx
  struct TSSession *v23[2]; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v24; // [rsp+38h] [rbp-50h] BYREF

  v23[1] = (struct TSSession *)-2LL;
  v5 = a4;
  v9 = 0;
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = a5;
  *a5 = 0;
  v12 = TsSessionFromSessionId(a1, 1, 0LL, v23);
  if ( v12 )
  {
    v10 = (unsigned __int16)v12 | 0x80070000;
    if ( v12 <= 0 )
      v10 = v12;
    goto LABEL_29;
  }
  v13 = v23[0];
  v14 = *((float *)v23[0] + 56);
  v15 = (__int64 **)((char *)v23[0] + 176);
  for ( i = (__int64 *)*((_QWORD *)v23[0] + 22); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_9;
  }
  i = 0LL;
LABEL_9:
  if ( !a3 )
  {
    if ( i )
    {
      v18 = (__int64 *)*i;
      if ( i == *v15 )
        *v15 = v18;
      else
        *(_QWORD *)i[1] = v18;
      v19 = (__int64 *)i[1];
      if ( i == v15[1] )
        v15[1] = v19;
      else
        *(_QWORD *)(*i + 8) = v19;
      *i = (__int64)v15[4];
      v15[4] = i;
      v20 = v15[2] == (__int64 *)1;
      v15[2] = (__int64 *)((char *)v15[2] - 1);
      if ( v20 )
        ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v15);
    }
    if ( !*((_QWORD *)v13 + 24) )
      *((_DWORD *)v13 + 56) = 1065353216;
    goto LABEL_26;
  }
  if ( !i )
  {
    try
    {
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::AddHead((__int64 *)v23[0] + 22, a2);
    }
    catch ( ATL::CAtlException *v24 )
    {
      v22 = v24;
      if ( *(_DWORD *)v24 == -1073741571 )
        _o__resetstkoflw();
      v10 = *(_DWORD *)v22;
      v9 = 0;
      if ( *(int *)v22 >= 0 )
      {
        v11 = a5;
        v5 = a4;
        v13 = v23[0];
        goto LABEL_14;
      }
LABEL_29:
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      result = v10;
    }
  }
LABEL_14:
  v17 = ((double (*)(void))ConvertDbToEngineVolume)();
  *((float *)v13 + 56) = fmaxf(*(float *)&v17, fminf(ConvertDbToEngineVolume(), v5));
LABEL_26:
  if ( v14 != *((float *)v13 + 56) )
    v9 = 1;
  *v11 = v9;
  goto LABEL_29;
}
