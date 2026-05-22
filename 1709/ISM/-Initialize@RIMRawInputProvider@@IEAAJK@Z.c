/*
 * XREFs of ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180087C18
 * Callers:
 *     ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180087B00 (-Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x180088710 (-RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?IsTouchTestModeEnabled@RIMRawInputProvider@@AEAA_NXZ @ 0x180088804 (-IsTouchTestModeEnabled@RIMRawInputProvider@@AEAA_NXZ.c)
 *     ??0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180088FA4 (--0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800891B0 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18008ADF4 (-Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18008B594 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18008BBBC (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180092294 (-Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMe.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180099630 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18009A3D8 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18009AF68 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18009B4CC (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18009C714 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18009C7E0 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RIMRawInputProvider::Initialize(RIMRawInputProvider *this, __int16 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int (*v8)(void *, unsigned int, void *); // r8
  unsigned int v9; // ebx
  int v10; // r9d
  bool IsTouchTestModeEnabled; // al
  int v12; // r15d
  struct IRawInputClient *v13; // r12
  int v14; // r12d
  RIMDeviceCollection *v15; // rax
  RIMDeviceCollection *v16; // rbx
  int v17; // eax
  int v18; // eax
  struct IRawInputClient *v19; // r12
  RIMDeviceCollection *v20; // rax
  RIMDeviceCollection *v21; // rbx
  int v22; // eax
  int v23; // eax
  struct IRawInputClient *v24; // r12
  HIDDeviceCollection *v25; // rax
  HIDDeviceCollection *v26; // rbx
  _DWORD *v27; // rax
  int v28; // eax
  int v29; // eax
  void **v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  int (*v33)(void *, unsigned int, void *); // r8
  int v34; // eax
  void **v35; // r15
  __int64 v36; // rcx
  int v37; // eax
  int (*v38)(void *, unsigned int, void *); // r8
  int v39; // eax
  void **v40; // r15
  __int64 v41; // rcx
  int v42; // eax
  int (*v43)(void *, unsigned int, void *); // r8
  int v44; // eax
  void **v45; // r15
  __int64 v46; // rcx
  int v47; // eax
  int (*v48)(void *, unsigned int, void *); // r8
  int v49; // eax
  void **v50; // r15
  __int64 v51; // rcx
  int v52; // eax
  int (*v53)(void *, unsigned int, void *); // r8
  int v54; // eax
  void **v55; // r15
  __int64 v56; // rcx
  int v57; // eax
  int (*v58)(void *, unsigned int, void *); // r8
  int v59; // eax
  void **v60; // r15
  __int64 v61; // rcx
  int v62; // eax
  int v63; // eax
  int (*v64)(void *, unsigned int, void *); // r8
  int v65; // eax
  void **v66; // r15
  __int64 v67; // rcx
  int v68; // eax
  int (*v69)(void *, unsigned int, void *); // r8
  int v70; // eax
  char pdwType; // [rsp+20h] [rbp-30h]
  int pvData; // [rsp+90h] [rbp+40h] BYREF
  HIDDeviceCollection *pcbData; // [rsp+A0h] [rbp+50h] BYREF
  void *v75; // [rsp+A8h] [rbp+58h] BYREF

  v75 = 0LL;
  v4 = (_QWORD *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = CoreUICreate(v4);
  v9 = v6;
  if ( v6 >= 0 )
  {
    pvData = a2 & 8;
    if ( (a2 & 8) != 0 )
    {
      IsTouchTestModeEnabled = RIMRawInputProvider::IsTouchTestModeEnabled((RIMRawInputProvider *)v7);
      *((_BYTE *)this + 24) = IsTouchTestModeEnabled;
      if ( IsTouchTestModeEnabled )
        RIMSetTestModeStatus(1LL);
    }
    v12 = -2147024809;
    if ( (a2 & 4) != 0 )
    {
      v7 = *((_QWORD *)this + 6);
      if ( v7 )
      {
        *((_QWORD *)this + 6) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v13 = (struct IRawInputClient *)*((_QWORD *)this + 4);
      if ( v13 )
      {
        v15 = (RIMDeviceCollection *)malloc(0xAB8uLL);
        v16 = v15;
        if ( v15 )
          memset(v15, 0, 0xAB8uLL);
        if ( v16 )
        {
          RIMDeviceCollection::RIMDeviceCollection(v16, v13);
          *(_QWORD *)v16 = &KeyboardDeviceCollection::`vftable';
          *((_QWORD *)v16 + 3) = this;
          v17 = RIMDeviceCollection::Initialize(v16, 2u, 0x78u, &v75);
          v14 = v17;
          if ( v17 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 78, v17);
          if ( v14 >= 0 )
          {
            *((_QWORD *)this + 6) = v16;
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 39, v14);
          }
          if ( v14 < 0 )
            (*(void (__fastcall **)(RIMDeviceCollection *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
        }
        else
        {
          v14 = -2147024882;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 36, 14);
            v9 = -2147024882;
            goto LABEL_32;
          }
        }
      }
      else
      {
        v14 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 30, 87);
          v9 = -2147024809;
LABEL_32:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v9;
          v10 = 130;
          goto LABEL_34;
        }
      }
      v9 = v14;
      if ( v14 < 0 )
        goto LABEL_32;
      if ( (gdwMitConfig & 2) == 0 )
      {
        v18 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v8, *((void **)this + 6));
        v9 = v18;
        if ( v18 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v9;
          pdwType = v18;
          v10 = 137;
          goto LABEL_6;
        }
      }
    }
    if ( (a2 & 2) != 0 )
    {
      v7 = *((_QWORD *)this + 7);
      if ( v7 )
      {
        *((_QWORD *)this + 7) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v19 = (struct IRawInputClient *)*((_QWORD *)this + 4);
      if ( v19 )
      {
        v20 = (RIMDeviceCollection *)malloc(0xAB8uLL);
        v21 = v20;
        if ( v20 )
          memset(v20, 0, 0xAB8uLL);
        if ( v21 )
        {
          RIMDeviceCollection::RIMDeviceCollection(v21, v19);
          *(_QWORD *)v21 = &MouseDeviceCollection::`vftable';
          *((_QWORD *)v21 + 3) = this;
          v22 = RIMDeviceCollection::Initialize(v21, 1u, 0xF0u, &v75);
          v14 = v22;
          if ( v22 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 78, v22);
          if ( v14 >= 0 )
          {
            *((_QWORD *)this + 7) = v21;
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 39, v14);
          }
          if ( v14 < 0 )
            (*(void (__fastcall **)(RIMDeviceCollection *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
        }
        else
        {
          v9 = -2147024882;
          v14 = -2147024882;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 36, 14);
            goto LABEL_61;
          }
        }
      }
      else
      {
        v14 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 30, 87);
          v9 = -2147024809;
LABEL_61:
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v9;
          v10 = 147;
LABEL_34:
          pdwType = v14;
          goto LABEL_6;
        }
      }
      v9 = v14;
      if ( v14 < 0 )
        goto LABEL_61;
      v23 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v8, *((void **)this + 7));
      v9 = v23;
      if ( v23 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v23;
        v10 = 152;
        goto LABEL_6;
      }
    }
    if ( (a2 & 0x20) != 0 )
    {
      v7 = *((_QWORD *)this + 8);
      if ( v7 )
      {
        *((_QWORD *)this + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v24 = (struct IRawInputClient *)*((_QWORD *)this + 4);
      if ( v24 )
      {
        v25 = (HIDDeviceCollection *)malloc(0xAE0uLL);
        v26 = v25;
        if ( v25 )
          memset(v25, 0, 0xAE0uLL);
        pcbData = v26;
        if ( v26 )
        {
          HIDDeviceCollection::HIDDeviceCollection(v26, v24);
          *(_QWORD *)v26 = &PTPDeviceCollection::`vftable';
          *((_DWORD *)v26 + 694) = 0xFFFF;
          v27 = operator new[](0x10uLL);
          *((_QWORD *)v26 + 345) = v27;
          v7 = *((unsigned int *)v26 + 694);
          *v27 = v7;
          *((_QWORD *)v26 + 346) = 1LL;
          *((_QWORD *)v26 + 3) = this;
        }
        else
        {
          v26 = 0LL;
        }
        if ( v26 )
        {
          v28 = HIDDeviceCollection::Initialize(v26, 8u, 0x3A8u, &v75);
          v12 = v28;
          if ( v28 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 82, v28);
          if ( v12 >= 0 )
          {
            *((_QWORD *)this + 8) = v26;
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 37, v12);
          }
          if ( v12 < 0 )
            (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v26 + 24LL))(v26, 1LL);
        }
        else
        {
          v9 = -2147024882;
          v12 = -2147024882;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 34, 14);
            goto LABEL_90;
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 28, 87);
        v9 = -2147024809;
LABEL_90:
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v12;
        v10 = 161;
        goto LABEL_6;
      }
      v9 = v12;
      if ( v12 < 0 )
        goto LABEL_90;
      v29 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v8, *((void **)this + 8));
      v9 = v29;
      if ( v29 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v29;
        v10 = 166;
        goto LABEL_6;
      }
    }
    if ( pvData )
    {
      v30 = (void **)((char *)this + 72);
      v31 = *((_QWORD *)this + 9);
      if ( v31 )
      {
        *v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = TouchDeviceCollection::Create(
              *((struct IRawInputClient **)this + 4),
              this,
              &v75,
              (struct TouchDeviceCollection **)this + 9);
      v9 = v32;
      if ( v32 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v32;
        v10 = 175;
        goto LABEL_6;
      }
      v34 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v33, *v30);
      v9 = v34;
      if ( v34 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v34;
        v10 = 180;
        goto LABEL_6;
      }
    }
    if ( (a2 & 0x10) != 0 )
    {
      v35 = (void **)((char *)this + 80);
      v36 = *((_QWORD *)this + 10);
      if ( v36 )
      {
        *v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v37 = PenDeviceCollection::Create(
              *((struct IRawInputClient **)this + 4),
              this,
              &v75,
              (struct PenDeviceCollection **)this + 10);
      v9 = v37;
      if ( v37 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v37;
        v10 = 189;
        goto LABEL_6;
      }
      v39 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v38, *v35);
      v9 = v39;
      if ( v39 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v39;
        v10 = 194;
        goto LABEL_6;
      }
    }
    if ( (a2 & 0x400) != 0 )
    {
      v40 = (void **)((char *)this + 96);
      v41 = *((_QWORD *)this + 12);
      if ( v41 )
      {
        *v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
      v42 = AugmentedInputDeviceCollection::Create(
              *((struct IRawInputClient **)this + 4),
              &v75,
              (struct AugmentedInputDeviceCollection **)this + 12);
      v9 = v42;
      if ( v42 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v42;
        v10 = 217;
        goto LABEL_6;
      }
      v44 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v43, *v40);
      v9 = v44;
      if ( v44 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v44;
        v10 = 222;
        goto LABEL_6;
      }
    }
    if ( (a2 & 0x2000) != 0 )
    {
      pvData = 0;
      LODWORD(pcbData) = 4;
      if ( RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
             L"ISM_DisableMPCSpatialControllers",
             0x18u,
             0LL,
             &pvData,
             (LPDWORD)&pcbData)
        || !pvData )
      {
        v45 = (void **)((char *)this + 104);
        v46 = *((_QWORD *)this + 13);
        if ( v46 )
        {
          *v45 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
        }
        v47 = SpatialInputControllerCollection::Create(
                *((struct IRawInputClient **)this + 4),
                this,
                *((struct IMessageSession **)this + 5),
                &v75,
                (struct SpatialInputControllerCollection **)this + 13);
        v9 = v47;
        if ( v47 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v9;
          pdwType = v47;
          v10 = 236;
          goto LABEL_6;
        }
        v49 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v48, *v45);
        v9 = v49;
        if ( v49 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v9;
          pdwType = v49;
          v10 = 241;
          goto LABEL_6;
        }
      }
    }
    if ( (a2 & 0x80u) != 0 )
    {
      v50 = (void **)((char *)this + 88);
      v51 = *((_QWORD *)this + 11);
      if ( v51 )
      {
        *v50 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
      }
      v52 = MobileButtonDeviceCollection::Create(
              *((struct IRawInputClient **)this + 4),
              this,
              &v75,
              (struct MobileButtonDeviceCollection **)this + 11);
      v9 = v52;
      if ( v52 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v52;
        v10 = 258;
        goto LABEL_6;
      }
      v54 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v53, *v50);
      v9 = v54;
      if ( v54 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v54;
        v10 = 263;
        goto LABEL_6;
      }
      v55 = (void **)((char *)this + 112);
      v56 = *((_QWORD *)this + 14);
      if ( v56 )
      {
        *v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = ConsumerControlDeviceCollection::Create(
              *((struct IRawInputClient **)this + 4),
              this,
              &v75,
              (struct ConsumerControlDeviceCollection **)this + 14);
      v9 = v57;
      if ( v57 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v57;
        v10 = 269;
        goto LABEL_6;
      }
      v59 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v58, *v55);
      v9 = v59;
      if ( v59 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v59;
        v10 = 274;
        goto LABEL_6;
      }
    }
    if ( (a2 & 0x800) != 0 )
    {
      v60 = (void **)((char *)this + 120);
      v61 = *((_QWORD *)this + 15);
      if ( v61 )
      {
        *v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
      }
      v62 = HeatDeviceCollection::Create(
              *((struct IRawInputClient **)this + 4),
              this,
              &v75,
              (struct HeatDeviceCollection **)this + 15);
      v9 = v62;
      if ( v62 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v62;
        v10 = 283;
        goto LABEL_6;
      }
      v63 = (*(__int64 (__fastcall **)(void *, void **))(*(_QWORD *)*v60 + 48LL))(*v60, &v75);
      v9 = v63;
      if ( v63 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v63;
        v10 = 290;
        goto LABEL_6;
      }
      v65 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v64, *v60);
      v9 = v65;
      if ( v65 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v9;
        pdwType = v65;
        v10 = 295;
        goto LABEL_6;
      }
    }
    if ( (a2 & 0x4000) == 0 )
      return 0;
    v66 = (void **)((char *)this + 128);
    v67 = *((_QWORD *)this + 16);
    if ( v67 )
    {
      *v66 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    }
    v68 = GazeDeviceCollection::Create(
            *((struct IRawInputClient **)this + 4),
            &v75,
            (struct GazeDeviceCollection **)this + 16);
    v9 = v68;
    if ( v68 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v9;
      pdwType = v68;
      v10 = 303;
      goto LABEL_6;
    }
    v70 = RIMRawInputProvider::RegisterWaitHandler(this, v75, v69, *v66);
    v9 = v70;
    if ( v70 >= 0 )
      return 0;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v9;
    pdwType = v70;
    v10 = 308;
LABEL_6:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v10, pdwType);
    return v9;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    pdwType = v6;
    v10 = 107;
    goto LABEL_6;
  }
  return v9;
}
