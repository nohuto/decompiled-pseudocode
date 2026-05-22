/*
 * XREFs of ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x18001BD48
 * Callers:
 *     ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x18001BF50 (-RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x18001BFB0 (-RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ConvertInputTypeToPointerType @ 0x18001A418 (ConvertInputTypeToPointerType.c)
 *     ?HitTestView@DWMInputRouter@@KAIPEAPEAXI@Z @ 0x18001BB4C (-HitTestView@DWMInputRouter@@KAIPEAPEAXI@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTestHelper(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // esi
  void *v6; // rdi
  unsigned int v7; // ebx
  unsigned __int8 (__fastcall ***v8)(_QWORD, _QWORD *); // rcx
  unsigned int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int8 (__fastcall ***v12)(_QWORD, _QWORD *); // rcx
  __int64 v13; // rcx
  _BYTE v15[24]; // [rsp+40h] [rbp-C0h]
  _QWORD v16[26]; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+130h] [rbp+30h] BYREF

  v4 = *(_DWORD *)(a2 + 24);
  *(_OWORD *)v15 = *(_OWORD *)a2;
  *(_QWORD *)&v15[16] = *(_QWORD *)(a2 + 16);
  v6 = 0LL;
  v7 = 0;
  memset(v16, 0, sizeof(v16));
  if ( v4 )
    LODWORD(v16[0]) = ConvertInputTypeToPointerType(v4);
  else
    LODWORD(v16[0]) = 0;
  v8 = *(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD *))(a1 + 184);
  LODWORD(v16[6]) = 100;
  v16[1] = *(unsigned int *)&v15[8];
  v16[2] = *(_QWORD *)&v15[12];
  v16[5] = &v17;
  if ( !(**v8)(v8, v16) )
    return v7;
  v9 = v16[6];
  if ( LODWORD(v16[6]) > 0x64 )
  {
    CloseHandle((HANDLE)v16[4]);
    memset(v16, 0, sizeof(v16));
    v6 = operator new[](saturated_mul(LODWORD(v16[6]), 8uLL));
    if ( !v6 )
    {
      v7 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 2092, 14);
      return v7;
    }
    v11 = ConvertInputTypeToPointerType(v4);
    v12 = *(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD *))(a1 + 184);
    LODWORD(v16[0]) = v11;
    v16[5] = v6;
    v16[1] = *(unsigned int *)&v15[8];
    v16[2] = *(_QWORD *)&v15[12];
    if ( !(**v12)(v12, v16) )
    {
      v7 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 2102, 255);
      goto LABEL_14;
    }
    v9 = v16[6];
  }
  *a3 = DWMInputRouter::HitTestView((void **)v16[5], v9);
LABEL_14:
  if ( v6 )
    operator delete(v6);
  return v7;
}
