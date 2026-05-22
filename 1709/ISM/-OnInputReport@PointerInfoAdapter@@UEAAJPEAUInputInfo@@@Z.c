/*
 * XREFs of ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18006FC40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x180009424 (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x180011EDC (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x180011F94 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINTER_INFO_UNION@@@Z @ 0x18006F97C (-PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINT.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180070460 (-GetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKPEAUtagPOINTER_INFO_UNIO.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x18007057C (-SetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNIO.c)
 *     ?RemoveKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBK@Z @ 0x18007080C (-RemoveKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBK@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z @ 0x18007090C (-SetValueForKey@-$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PointerInfoAdapter::OnInputReport(PointerInfoAdapter *this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int PointersFromInput; // eax
  __int64 v7; // rcx
  int v8; // edx
  struct Pointer *v9; // r8
  PointerInfoAdapter *v10; // rcx
  char v11; // r12
  _DWORD *v12; // r14
  __int64 *v13; // r15
  int v14; // edx
  unsigned int v15; // ecx
  int ValueForKey; // eax
  __int64 v17; // rcx
  char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  struct Pointer *v24; // r9
  __int64 *v25; // r12
  int v26; // r14d
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  struct tagPOINTER_INFO_UNION *v33; // r8
  struct tagPOINTER_INFO_UNION *v34; // rdx
  struct Pointer *v35; // rbx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  char *v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  char v46; // al
  int v47; // r9d
  unsigned int v48; // edx
  __int64 v49; // r8
  __int64 v50; // rcx
  char v51; // al
  char v53; // [rsp+30h] [rbp-708h]
  int v54; // [rsp+34h] [rbp-704h] BYREF
  unsigned int v55; // [rsp+38h] [rbp-700h] BYREF
  void *Block; // [rsp+40h] [rbp-6F8h] BYREF
  int v57; // [rsp+48h] [rbp-6F0h]
  struct tagPOINTER_INFO_UNION *v58; // [rsp+50h] [rbp-6E8h]
  struct tagPOINTER_INFO_UNION *v59; // [rsp+58h] [rbp-6E0h]
  struct Pointer *v60; // [rsp+60h] [rbp-6D8h]
  char *v61; // [rsp+68h] [rbp-6D0h]
  __int64 v62; // [rsp+70h] [rbp-6C8h]
  _BYTE v63[12]; // [rsp+80h] [rbp-6B8h] BYREF
  int v64; // [rsp+8Ch] [rbp-6ACh]
  struct Pointer *v65[10]; // [rsp+110h] [rbp-628h] BYREF
  _OWORD v66[90]; // [rsp+160h] [rbp-5D8h] BYREF

  v62 = -2LL;
  v4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return v4;
  memset(v66, 0, sizeof(v66));
  v55 = 0;
  PointersFromInput = GetPointersFromInput(a2, v5, v65, &v55);
  v4 = PointersFromInput;
  if ( PointersFromInput < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 291, PointersFromInput);
    goto LABEL_126;
  }
  if ( !*((_BYTE *)a2 + 689) )
  {
    v11 = 1;
    v53 = 1;
    Block = 0LL;
    v58 = 0LL;
    v57 = *((_DWORD *)a2 + 13);
    if ( !v57 )
    {
      v57 = *((_DWORD *)this + 15);
      *((_DWORD *)this + 15) = v57 + 1;
    }
    v12 = (_DWORD *)((char *)a2 + 4);
    v61 = (char *)a2 + 4;
    v13 = (__int64 *)((char *)this + 72);
    v14 = *((_DWORD *)a2 + 1);
    if ( v14 == *((_DWORD *)this + 22) || (v15 = 0, !*((_DWORD *)this + 20)) )
    {
LABEL_31:
      v18 = (char *)operator new(0x20uLL);
      v60 = (struct Pointer *)v18;
      *((_DWORD *)v18 + 6) = 0xFFFF;
      *((_QWORD *)v18 + 1) = operator new[](0x10uLL);
      v19 = 0LL;
      v20 = 2LL;
      do
      {
        *(_DWORD *)(v19 + *((_QWORD *)v18 + 1)) = *((_DWORD *)v18 + 6);
        v19 += 8LL;
        --v20;
      }
      while ( v20 );
      *((_DWORD *)v18 + 4) = 2;
      *((_DWORD *)v18 + 5) = 0;
      *(_DWORD *)v18 = 0;
      v18[4] = 1;
      Block = v18;
      v21 = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey((__int64)this + 72, (int *)a2 + 1, &Block);
      v4 = v21;
      if ( v21 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v22, &MinInput_Warning_CheckResult, 0, 346, v21);
        goto LABEL_126;
      }
    }
    else
    {
      while ( *(_DWORD *)(*v13 + 16LL * v15) != v14 )
      {
        if ( ++v15 >= *((_DWORD *)this + 20) )
          goto LABEL_31;
      }
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey(
                      (__int64)this + 72,
                      (int *)a2 + 1,
                      &Block);
      v4 = ValueForKey;
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 352, ValueForKey);
LABEL_126:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v18 = (char *)Block;
    }
    v23 = 0LL;
    LODWORD(Block) = 0;
    if ( !v55 )
    {
LABEL_113:
      (*(void (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**((_QWORD **)this + 3) + 24LL))(
        *((_QWORD *)this + 3),
        v55,
        v66);
      if ( v11 )
      {
        v48 = 0;
        if ( !*((_DWORD *)this + 20) )
        {
LABEL_121:
          v51 = Microsoft_OneCore_MinInputEnableBits;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v43, &MinInput_Warning_CheckResult, 0, 221, 5);
            v51 = Microsoft_OneCore_MinInputEnableBits;
          }
          if ( (v51 & 2) == 0 )
            goto LABEL_126;
          v47 = 530;
          goto LABEL_125;
        }
        v49 = *v13;
        while ( 1 )
        {
          v43 = v48;
          if ( *(_DWORD *)(v49 + 16LL * v48) == *v12 )
            break;
          if ( ++v48 >= *((_DWORD *)this + 20) )
            goto LABEL_121;
        }
        v50 = 2LL * v48;
        *(_DWORD *)(v49 + 8 * v50) = *((_DWORD *)this + 22);
        *(_QWORD *)(*v13 + 8 * v50 + 8) = 0LL;
        --*((_DWORD *)this + 21);
        v4 = 0;
        if ( v18 )
        {
          operator delete(*((void **)v18 + 1));
          operator delete(v18);
        }
      }
      return v4;
    }
    while ( 1 )
    {
      v54 = 0;
      v24 = v65[v23];
      v60 = v24;
      v59 = (struct tagPOINTER_INFO_UNION *)&v66[9 * v23];
      v25 = (__int64 *)(v18 + 8);
      v26 = *(_DWORD *)v24;
      if ( *(_DWORD *)v24 == *((_DWORD *)v18 + 6) || (v27 = 0LL, (v28 = *((_DWORD *)v18 + 4)) == 0) )
      {
LABEL_54:
        if ( !*((_BYTE *)this + 64) )
        {
          v26 = *((_DWORD *)this + 14);
          *((_DWORD *)this + 14) = v26 + 1;
        }
        v54 = v26;
        v37 = DynamicSizeMap<unsigned long,unsigned long,2>::SetValueForKey(v18 + 8, v24, &v54);
        if ( v37 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v38, &MinInput_Warning_CheckResult, 0, 370, v37);
          goto LABEL_126;
        }
        v35 = v60;
        if ( (*((_BYTE *)v60 + 4) & 2) != 0 )
        {
          v36 = 65537LL;
        }
        else
        {
          if ( (*((_BYTE *)v60 + 4) & 1) == 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v38, &MinInput_Warning_CheckResult, 0, 392, 255);
            goto LABEL_126;
          }
          v36 = 131073LL;
        }
        v33 = v58;
        v34 = v59;
      }
      else
      {
        v29 = *v25;
        while ( *(_DWORD *)(v29 + 8 * v27) != v26 )
        {
          v27 = (unsigned int)(v27 + 1);
          if ( (unsigned int)v27 >= v28 )
            goto LABEL_54;
        }
        if ( v26 == *((_DWORD *)v18 + 6) )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 116, 87);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v30 = 0LL;
        while ( *(_DWORD *)(v29 + 8 * v30) != v26 )
        {
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= v28 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 133, 5);
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 401, 5);
            goto LABEL_126;
          }
        }
        v26 = *(_DWORD *)(v29 + 8 * v30 + 4);
        v54 = v26;
        v31 = DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::GetValueForKey((char *)this + 32, &v54, v63);
        if ( v31 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v32, &MinInput_Warning_CheckResult, 0, 405, v31);
          goto LABEL_126;
        }
        v33 = v58;
        v34 = v59;
        if ( *(_DWORD *)v18 == v26 )
          v33 = v59;
        v58 = v33;
        v35 = v60;
        if ( (*((_BYTE *)v60 + 4) & 2) != 0 )
          v36 = (v64 & 4) != 0 ? 0x20000 : 0x10000;
        else
          v36 = (v64 & 4) != 0 ? 0x40000 : 0x20000;
      }
      if ( !*(_DWORD *)v18 )
        *(_DWORD *)v18 = v26;
      if ( (v36 & 0x10000) == 0 )
        goto LABEL_72;
      if ( v18[4] )
      {
        if ( v26 == *(_DWORD *)v18 )
          break;
        if ( v33 )
          *((_DWORD *)v33 + 3) &= ~0x2000u;
        *(_DWORD *)v18 = v26;
      }
      if ( v26 == *(_DWORD *)v18 )
        break;
LABEL_74:
      if ( (*((_BYTE *)v35 + 4) & 1) != 0 )
      {
        v36 = (unsigned int)v36 | 2;
        v53 = 0;
      }
      *((_DWORD *)v34 + 1) = v26;
      *((_DWORD *)v34 + 3) = v36;
      *((_DWORD *)v34 + 2) = v57;
      PointerInfoAdapter::PopulatePointerInfoProperties((PointerInfoAdapter *)v36, (HMONITOR *)a2, v35, v34);
      v39 = (char *)this + 32;
      if ( (*((_BYTE *)v35 + 4) & 1) != 0 )
      {
        v40 = DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::SetValueForKey(v39, &v54, v59);
        v4 = v40;
        if ( v40 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v41, &MinInput_Warning_CheckResult, 0, 513, v40);
          goto LABEL_126;
        }
      }
      else
      {
        v42 = DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::RemoveKey(v39, &v54);
        if ( v42 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v43, &MinInput_Warning_CheckResult, 0, 518, v42);
          goto LABEL_126;
        }
        v44 = 0LL;
        if ( !*((_DWORD *)v18 + 4) )
        {
LABEL_102:
          v46 = Microsoft_OneCore_MinInputEnableBits;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v43, &MinInput_Warning_CheckResult, 0, 221, 5);
            v46 = Microsoft_OneCore_MinInputEnableBits;
          }
          if ( (v46 & 2) == 0 )
            goto LABEL_126;
          v47 = 521;
LABEL_125:
          McTemplateU0qqq(v43, &MinInput_Warning_CheckResult, 0, v47, 5);
          goto LABEL_126;
        }
        v45 = *v25;
        while ( 1 )
        {
          v43 = (unsigned int)v44;
          if ( *(_DWORD *)(v45 + 8 * v44) == *(_DWORD *)v60 )
            break;
          v44 = (unsigned int)(v44 + 1);
          if ( (unsigned int)v44 >= *((_DWORD *)v18 + 4) )
            goto LABEL_102;
        }
        *(_DWORD *)(v45 + 8LL * (unsigned int)v44) = *((_DWORD *)v18 + 6);
        *(_DWORD *)(*v25 + 8LL * (unsigned int)v44 + 4) = 0;
        --*((_DWORD *)v18 + 5);
        v4 = 0;
      }
      v23 = (unsigned int)((_DWORD)Block + 1);
      LODWORD(Block) = v23;
      if ( (unsigned int)v23 >= v55 )
      {
        v12 = v61;
        v11 = v53;
        goto LABEL_113;
      }
    }
    v18[4] = 0;
LABEL_72:
    if ( v26 == *(_DWORD *)v18 )
    {
      LODWORD(v36) = v36 | 0x2000;
      v58 = v34;
    }
    goto LABEL_74;
  }
  if ( v55 != 1 )
  {
LABEL_18:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 300, 255);
    goto LABEL_126;
  }
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 != *((_DWORD *)this + 22) )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 20) )
    {
      while ( *(_DWORD *)(*((_QWORD *)this + 9) + 16LL * (unsigned int)v7) != v8 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)this + 20) )
          goto LABEL_11;
      }
      goto LABEL_18;
    }
  }
LABEL_11:
  v9 = v65[0];
  if ( *((_BYTE *)this + 64) )
  {
    v10 = (PointerInfoAdapter *)*(unsigned int *)v65[0];
  }
  else
  {
    v10 = (PointerInfoAdapter *)*((unsigned int *)this + 14);
    *((_DWORD *)this + 14) = (_DWORD)v10 + 1;
  }
  DWORD1(v66[0]) = (_DWORD)v10;
  HIDWORD(v66[0]) = 335872;
  if ( *((_DWORD *)a2 + 13) )
  {
    DWORD2(v66[0]) = *((_DWORD *)a2 + 13);
  }
  else
  {
    DWORD2(v66[0]) = *((_DWORD *)this + 15);
    *((_DWORD *)this + 15) = DWORD2(v66[0]) + 1;
  }
  PointerInfoAdapter::PopulatePointerInfoProperties(v10, (HMONITOR *)a2, v9, (struct tagPOINTER_INFO_UNION *)v66);
  (*(void (__fastcall **)(_QWORD, __int64, _OWORD *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), 1LL, v66);
  return v4;
}
