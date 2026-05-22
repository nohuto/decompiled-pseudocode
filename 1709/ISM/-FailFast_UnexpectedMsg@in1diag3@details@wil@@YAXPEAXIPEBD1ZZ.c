/*
 * XREFs of ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18007809C
 * Callers:
 *     _anonymous_namespace_::GetPoseSubKey @ 0x180074508 (_anonymous_namespace_--GetPoseSubKey.c)
 *     _lambda_d8cf32afb77b790db641381db8dab81f_::operator() @ 0x1800B5100 (_lambda_d8cf32afb77b790db641381db8dab81f_--operator().c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B76EC (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B7AD8 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 *     std::_Func_impl__lambda_1fd6b219498efdbd05d8af8c3e9a695a__std::allocator_int__void_::_Do_call @ 0x1800BE1C0 (std--_Func_impl__lambda_1fd6b219498efdbd05d8af8c3e9a695a__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1800637B8 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

void wil::details::in1diag3::FailFast_UnexpectedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        char *a4,
        const char *a5,
        ...)
{
  __int64 v5; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  wil::details::ReportFailure_HrMsg(
    (__int64)this,
    (unsigned int)a2,
    a3,
    a4,
    v5,
    retaddr,
    3,
    0x8000FFFF,
    (unsigned __int16 *)a4,
    (va_list)&a5);
}
