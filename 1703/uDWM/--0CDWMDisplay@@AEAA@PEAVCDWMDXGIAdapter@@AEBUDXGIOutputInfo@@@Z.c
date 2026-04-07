/*
 * XREFs of ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18000FF9C
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18000FB28 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?ForceHighColor@@YAKXZ @ 0x18001020C (-ForceHighColor@@YAKXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CDWMDisplay *__fastcall CDWMDisplay::CDWMDisplay(
        CDWMDisplay *this,
        struct CDWMDXGIAdapter *a2,
        const struct DXGIOutputInfo *a3)
{
  _WORD *v6; // rcx
  __int64 v7; // rdx
  __int16 v8; // ax
  _WORD *v9; // rax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  CDWMDisplay *result; // rax
  __int128 v15; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v16[96]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+90h] [rbp-9h]

  *(_QWORD *)&v15 = 0LL;
  memset_0(v16, 0, 0x98uLL);
  *(_DWORD *)this = 1;
  v6 = (_WORD *)((char *)this + 96);
  v7 = 32LL;
  *((_BYTE *)this + 164) = (*((_BYTE *)a3 + 200) & 2) != 0;
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 42);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 32);
  *((_QWORD *)this + 2) = *((_QWORD *)a3 + 13);
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 216) = (*((_BYTE *)a3 + 200) & 4) != 0;
  *((_BYTE *)this + 217) = (*((_BYTE *)a3 + 200) & 8) != 0;
  do
  {
    v8 = *(_WORD *)((char *)v6 + a3 - (CDWMDisplay *)((char *)this + 96) + 204);
    if ( !v8 )
      break;
    *v6++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v6 - 1;
  if ( v7 )
    v9 = v6;
  *v9 = 0;
  if ( ((*((_DWORD *)a3 + 40) - 2) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a3 + 35);
    v10 = *((_DWORD *)a3 + 36);
  }
  else
  {
    *((_DWORD *)this + 45) = *((_DWORD *)a3 + 36);
    v10 = *((_DWORD *)a3 + 35);
  }
  *((_DWORD *)this + 46) = v10;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int128 *))a3)(
         *(_QWORD *)a3,
         &GUID_068346e8_aaec_4b84_add7_137f513f77a1,
         &v15) < 0
    || (*(int (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v15 + 216LL))(v15, v16) < 0 )
  {
    v17 = 8LL;
  }
  if ( (_QWORD)v15 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(v15);
    *(_QWORD *)&v15 = 0LL;
  }
  if ( ForceHighColor() )
  {
    v12 = 10;
    v17 = 0xC0000000ALL;
    v11 = 12;
  }
  else
  {
    v11 = HIDWORD(v17);
    v12 = v17;
  }
  if ( v12 > 8 && v11 >= 12 && (v11 <= 14 || v11 == 16) )
  {
    if ( *((_DWORD *)a2 + 74) == 32902 && ForceHighColor() != 3 || ForceHighColor() == 2 )
    {
      *((_DWORD *)this + 49) = 24;
      *((_DWORD *)this + 53) = 12;
    }
    else
    {
      *((_DWORD *)this + 49) = 10;
      *((_DWORD *)this + 53) = 1;
    }
  }
  else
  {
    *((_DWORD *)this + 53) = 0;
    *((_DWORD *)this + 49) = 87;
  }
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 38);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 39);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 40);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 41);
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = *((_DWORD *)a3 + 35);
  *((_DWORD *)this + 9) = *((_DWORD *)a3 + 36);
  v13 = *((_DWORD *)a3 + 46);
  HIDWORD(v15) = *((_DWORD *)a3 + 49);
  LODWORD(v15) = v13;
  *(_QWORD *)((char *)&v15 + 4) = *(_QWORD *)((char *)a3 + 188);
  result = this;
  *(_OWORD *)((char *)this + 56) = v15;
  v15 = *(_OWORD *)((char *)a3 + 168);
  *(_OWORD *)((char *)this + 40) = v15;
  return result;
}
