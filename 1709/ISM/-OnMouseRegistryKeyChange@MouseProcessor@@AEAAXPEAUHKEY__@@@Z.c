/*
 * XREFs of ?OnMouseRegistryKeyChange@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x18006C9F4
 * Callers:
 *     ?OnMouseRegistryKeyChangeStatic@MouseProcessor@@SAXPEAXPEAUHKEY__@@@Z @ 0x18006C9E0 (-OnMouseRegistryKeyChangeStatic@MouseProcessor@@SAXPEAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MouseProcessor::OnMouseRegistryKeyChange(MouseProcessor *this, HKEY a2)
{
  LSTATUS v3; // eax
  signed int v4; // ecx
  void *v5; // rbx
  __int64 v6; // rcx
  DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v7[0] = 4;
  v8 = 0;
  v9 = 0;
  v3 = RegQueryValueExW(a2, L"EnableMouseAsTouch", 0LL, &v8, (LPBYTE)&v9, v7);
  v4 = (unsigned __int16)v3 | 0x80070000;
  if ( v3 <= 0 )
    v4 = v3;
  if ( v4 >= 0 && v8 == 4 && v9 == 1 )
  {
    if ( !*((_QWORD *)this + 34) )
    {
      v5 = operator new(0xA40uLL);
      memset(v5, 0, 0xA40uLL);
      v6 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 34) = v5;
      **((_DWORD **)this + 34) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) = 8;
      (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 3) + 40LL))(
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 34),
        (char *)this + 168);
    }
    *((_BYTE *)this + 264) = 1;
  }
  else
  {
    if ( *((_QWORD *)this + 34) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
      operator delete(*((void **)this + 34));
      *((_QWORD *)this + 34) = 0LL;
    }
    *((_BYTE *)this + 264) = 0;
  }
}
