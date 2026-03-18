/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C00109C0
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C000D1E8 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C001079C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0001EF0 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001C310 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        unsigned __int8 a2,
        void **a3)
{
  _OWORD *v3; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // ebx
  __int128 v16; // xmm1
  __int64 v17; // rcx
  ACCESS_MASK v18; // esi
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r9
  _OWORD *v22; // rax
  __int64 v23; // rdx
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int64 v34; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  _DWORD v43[72]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v44[288]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v45; // [rsp+2D0h] [rbp+1D0h]

  Handle = (HANDLE)-1LL;
  v3 = v43;
  v6 = 2LL;
  do
  {
    v7 = *((_OWORD *)a1 + 1);
    *v3 = *(_OWORD *)a1;
    v8 = *((_OWORD *)a1 + 2);
    v3[1] = v7;
    v9 = *((_OWORD *)a1 + 3);
    v3[2] = v8;
    v10 = *((_OWORD *)a1 + 4);
    v3[3] = v9;
    v11 = *((_OWORD *)a1 + 5);
    v3[4] = v10;
    v12 = *((_OWORD *)a1 + 6);
    v3[5] = v11;
    v13 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v3[6] = v12;
    v3 += 8;
    *(v3 - 1) = v13;
    --v6;
  }
  while ( v6 );
  v14 = *(_OWORD *)a1;
  v36 = 0LL;
  v15 = 0;
  v16 = *((_OWORD *)a1 + 1);
  *v3 = v14;
  v3[1] = v16;
  if ( v43[0] != 232 && (v43[0] != 288 || v43[58] > 4u) || v43[2] > 4u || v43[16] > 4u || v43[30] > 4u || v43[44] > 4u )
    v15 = -1073741811;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v17 = 0LL;
    v18 = 3;
  }
  else
  {
    v17 = 3221225472LL;
    v18 = -1073741824;
  }
  if ( v15 < 0 )
    goto LABEL_24;
  v19 = UserAllocDefaultCompositionSecurityDescriptor(v17, &v36);
  v20 = v36;
  v15 = v19;
  if ( v19 >= 0 )
  {
    v38 = 0LL;
    v40 = 0;
    v39 = 0LL;
    v42 = 0LL;
    v37 = 48;
    v41 = v36;
    KeEnterCriticalRegion();
    v22 = v44;
    v23 = 2LL;
    v24 = v43;
    do
    {
      v25 = v24[1];
      *v22 = *v24;
      v26 = v24[2];
      v22[1] = v25;
      v27 = v24[3];
      v22[2] = v26;
      v28 = v24[4];
      v22[3] = v27;
      v29 = v24[5];
      v22[4] = v28;
      v30 = v24[6];
      v22[5] = v29;
      v31 = v24[7];
      v24 += 8;
      v22[6] = v30;
      v22 += 8;
      *(v22 - 1) = v31;
      --v23;
    }
    while ( v23 );
    LOBYTE(v21) = 1;
    v32 = v24[1];
    *v22 = *v24;
    v22[1] = v32;
    LODWORD(v34) = 200;
    v45 ^= (a2 ^ (unsigned __int8)v45) & 1;
    v15 = CompositionObject::Create(
            v45,
            (__int64)&v37,
            v18,
            v21,
            2,
            v34,
            (__int64 (__fastcall *)(_QWORD, __int64, __int64))CompositionInputObject::ObjectInit,
            (__int64)v44,
            &Handle);
    KeLeaveCriticalRegion();
    if ( v15 >= 0 )
      *a3 = Handle;
  }
  if ( v20 )
    Win32FreePool(v20);
  if ( v15 < 0 )
  {
LABEL_24:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  return (unsigned int)v15;
}
