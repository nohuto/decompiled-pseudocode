/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C009E6A4
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00031D4 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C00950CC (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00251A0 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0026BC0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        unsigned __int8 a2,
        void **a3)
{
  _OWORD *v3; // rax
  __int64 v4; // r14
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // ebx
  __int128 v17; // xmm1
  int v18; // ecx
  ACCESS_MASK v19; // esi
  int v20; // eax
  struct _ACL *v21; // rdi
  __int64 v22; // r9
  _OWORD *v23; // rax
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
  struct _ACL *v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  struct _ACL *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  _DWORD v43[72]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v44[288]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v45; // [rsp+2D0h] [rbp+1D0h]

  Handle = (HANDLE)-1LL;
  v3 = v43;
  v4 = 2LL;
  v7 = 2LL;
  do
  {
    v8 = *((_OWORD *)a1 + 1);
    *v3 = *(_OWORD *)a1;
    v9 = *((_OWORD *)a1 + 2);
    v3[1] = v8;
    v10 = *((_OWORD *)a1 + 3);
    v3[2] = v9;
    v11 = *((_OWORD *)a1 + 4);
    v3[3] = v10;
    v12 = *((_OWORD *)a1 + 5);
    v3[4] = v11;
    v13 = *((_OWORD *)a1 + 6);
    v3[5] = v12;
    v14 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v3[6] = v13;
    v3 += 8;
    *(v3 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = *(_OWORD *)a1;
  v36 = 0LL;
  v16 = 0;
  v17 = *((_OWORD *)a1 + 1);
  *v3 = v15;
  v3[1] = v17;
  if ( v43[0] != 232 && (v43[0] != 288 || v43[58] > 4u) || v43[2] > 4u || v43[16] > 4u || v43[30] > 4u || v43[44] > 4u )
    v16 = -1073741811;
  if ( UserIsCurrentProcessDwm() )
  {
    v18 = 0;
    v19 = 3;
  }
  else
  {
    v18 = -1073741824;
    v19 = -1073741824;
  }
  if ( v16 < 0 )
    goto LABEL_23;
  v20 = UserAllocDefaultCompositionSecurityDescriptor(v18, &v36);
  v21 = v36;
  v16 = v20;
  if ( v20 >= 0 )
  {
    v38 = 0LL;
    v40 = 0;
    v39 = 0LL;
    v42 = 0LL;
    v37 = 48;
    v41 = v36;
    KeEnterCriticalRegion();
    v23 = v44;
    v24 = v43;
    do
    {
      v25 = v24[1];
      *v23 = *v24;
      v26 = v24[2];
      v23[1] = v25;
      v27 = v24[3];
      v23[2] = v26;
      v28 = v24[4];
      v23[3] = v27;
      v29 = v24[5];
      v23[4] = v28;
      v30 = v24[6];
      v23[5] = v29;
      v31 = v24[7];
      v24 += 8;
      v23[6] = v30;
      v23 += 8;
      *(v23 - 1) = v31;
      --v4;
    }
    while ( v4 );
    LOBYTE(v22) = 1;
    v32 = v24[1];
    *v23 = *v24;
    v23[1] = v32;
    v45 ^= (a2 ^ (unsigned __int8)v45) & 1;
    LODWORD(v34) = 200;
    v16 = CompositionObject::Create(
            0LL,
            (__int64)&v37,
            v19,
            v22,
            3,
            v34,
            (__int64 (__fastcall *)(_QWORD, __int64, __int64))CompositionInputObject::ObjectInit,
            (__int64)v44,
            &Handle);
    KeLeaveCriticalRegion();
    if ( v16 >= 0 )
      *a3 = Handle;
  }
  if ( v21 )
    Win32FreePool((__int64)v21);
  if ( v16 < 0 )
  {
LABEL_23:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  return (unsigned int)v16;
}
