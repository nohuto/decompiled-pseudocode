/*
 * XREFs of ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C0284EAC
 * Callers:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C0285374 (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall MULTISURF::bCreateDIB(MULTISURF *this)
{
  __int64 v1; // r14
  __int64 v3; // r15
  __int64 v4; // rbx
  int v5; // eax
  __int64 *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // edi
  void (__fastcall *v9)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *); // r10
  __int64 v10; // rax
  _DWORD *v11; // rcx
  _QWORD v13[4]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v14; // [rsp+80h] [rbp+7h] BYREF
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  __int64 v17; // [rsp+90h] [rbp+17h] BYREF
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]

  v1 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v5 = *(_DWORD *)(*(_QWORD *)this + 56LL);
  v16 = *(_DWORD *)(*(_QWORD *)this + 60LL);
  v14 = 0LL;
  v15 = v5;
  ERECTL::operator*=(&v14, (_DWORD *)this + 2);
  v18 = v15 - v14;
  v19 = v16 - HIDWORD(v14);
  v17 = 0LL;
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[0]) = *(_DWORD *)(v1 + 96);
  HIDWORD(v13[0]) = v15 - v14;
  LODWORD(v13[1]) = v16 - HIDWORD(v14);
  v6 = *(__int64 **)(v1 + 128);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0LL;
  v8 = 1;
  v13[2] = v7;
  LODWORD(v13[3]) = 1;
  if ( SURFMEM::bCreateDIB(
         (MULTISURF *)((char *)this + 56),
         (struct _DEVBITMAPINFO *)v13,
         0LL,
         0LL,
         0,
         0LL,
         0LL,
         0,
         1,
         0,
         0)
    && (v9 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))(v4 + 2856)) != 0LL )
  {
    v10 = *((_QWORD *)this + 7);
    if ( v10 )
      v3 = v10 + 24;
    v9(v3, *(_QWORD *)this + 24LL, 0LL, 0LL, &v17, &v14);
    v11 = (_DWORD *)*((_QWORD *)this + 13);
    *((_DWORD *)this + 18) = *v11 - v14;
    *((_DWORD *)this + 19) = v11[1] - HIDWORD(v14);
    *((_DWORD *)this + 20) = v11[2] - v14;
    *((_DWORD *)this + 21) = v11[3] - HIDWORD(v14);
  }
  else
  {
    return 0;
  }
  return v8;
}
